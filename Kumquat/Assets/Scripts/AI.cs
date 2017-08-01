using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AI : MonoBehaviour {
	GameObject player;
	public SpriteRenderer[] parts;
	public bool grounded;
	public Animator anim;
	public ParticleSystem ps;
	public Rigidbody2D body;
	public Collider2D[] colliders;
	public Transform arm;
	public GameObject antilight;
	float energy = 1, fadeTimer = 0, waitTime = 2;
	bool fading = false, lit = false, shining = false;
	Coroutine shine;
	// Use this for initialization
	void Start () {
		player = GameObject.FindGameObjectWithTag ("Player");
	}
	
	// Update is called once per frame
	void Update () {
		if (fading)
			return;
		foreach(SpriteRenderer sr in parts)
			sr.color = new Color (sr.color.r, sr.color.g, sr.color.b, Mathf.Max(energy, 0.2f));
		waitTime -= Time.deltaTime;
		if (waitTime > 0)
			return;
		fadeTimer -= Time.deltaTime;
		energy = Mathf.Min(energy + 0.1f * Time.deltaTime, 1);
		anim.SetBool ("Grounded", grounded);
		if(!lit){	
			if (grounded && energy < 0.8f) {
				anim.SetBool ("Walk", false);
				body.velocity = new Vector2 (0, body.velocity.y);
				anim.SetBool ("Crank", true);
				energy = Mathf.Min (energy + 0.25f * Time.deltaTime, 1);
			} else if (transform.position.x < -7) {
				anim.SetBool ("Crank", false);
				anim.SetBool ("Walk", true);
				body.velocity = new Vector2 (Time.deltaTime * 300, body.velocity.y);
			} else if (transform.position.x - player.transform.position.x > 7) {
				anim.SetBool ("Crank", false);
				anim.SetBool ("Walk", true);
				body.velocity = new Vector2 (-Time.deltaTime * 300, body.velocity.y);
			} else if (transform.position.x - player.transform.position.x < -7) {
				anim.SetBool ("Crank", false);
				anim.SetBool ("Walk", true);
				body.velocity = new Vector2 (Time.deltaTime * 300, body.velocity.y);
			} else {
				anim.SetBool ("Crank", false);
				anim.SetBool ("Walk", false);
				body.velocity = new Vector2 (0, body.velocity.y);
			}
		}
		if (energy >= 0.8f && !lit) {
			if (!shining) {
				shine = StartCoroutine (Shine ());
				shining = true;
			}
		} else {
			if(shine != null)
				StopCoroutine (shine);
			antilight.SetActive (false);
			arm.rotation = Quaternion.Euler (0, 0, 0);
			shining = false;
		}
		if (energy < 0.2f && fadeTimer <= 0)
			StartCoroutine (Fade ());
		if (shining)
			return;
		if(transform.position.x > player.transform.position.x)
			transform.localScale = new Vector3(-0.8f, 0.8f);
		else 
			transform.localScale = new Vector3(0.8f, 0.8f);
	}

	void OnTriggerStay2D(Collider2D coll) {
		if (coll.tag == "Light") {
			anim.SetBool ("Blocking", true);
			energy = Mathf.Max(0, energy - 0.4f * Time.deltaTime);
			lit = true;
		}
	}

	void OnTriggerExit2D(Collider2D coll) {
		if (coll.tag == "Light") {
			anim.SetBool ("Blocking", false);
			lit = false;
		}
	}

	IEnumerator Shine(){
		for (float i = 0; i < 0.5f; i += Time.deltaTime) {
			yield return new WaitForSeconds (Time.deltaTime);
			Vector3 relPos = player.transform.position - arm.position;
			if (relPos.x < 0) 
				transform.localScale = new Vector3 (-0.8f, 0.8f, 1);
			else 
				transform.localScale = new Vector3 (0.8f, 0.8f, 1);
			arm.rotation = Quaternion.Euler (0, 0, Mathf.Atan2 (relPos.y, relPos.x) * Mathf.Rad2Deg + 90);
		}
		antilight.SetActive (true);
		while (true) {
			float intensity = Mathf.Clamp (energy * 10f, 2f, 7.5f);
			antilight.transform.localScale = Vector3.one * intensity;
			yield return new WaitForSeconds (Time.deltaTime);
			Vector3 relPos = player.transform.position - arm.position;
			if (transform.localScale.x < 0) {
				float angle = Mathf.Atan2 (relPos.y, -relPos.x) * Mathf.Rad2Deg + 90;
				if (Mathf.Abs(angle - arm.localRotation.eulerAngles.z) < 1)
					continue;
				if (angle > arm.localRotation.eulerAngles.z)
					arm.Rotate (new Vector3 (0, 0, 60 * Time.deltaTime));
				else if (angle < arm.localRotation.eulerAngles.z)
					arm.Rotate (new Vector3 (0, 0, -60 * Time.deltaTime));
			} else {
				if (Mathf.Abs(Mathf.Atan2 (relPos.y, relPos.x) * Mathf.Rad2Deg + 90 - arm.localRotation.eulerAngles.z) < 1)
					continue;
				if (Mathf.Atan2 (relPos.y, relPos.x) * Mathf.Rad2Deg + 90 > arm.localRotation.eulerAngles.z)
					arm.Rotate (new Vector3 (0, 0, 60 * Time.deltaTime));
				else if (Mathf.Atan2 (relPos.y, relPos.x) * Mathf.Rad2Deg + 90 < arm.localRotation.eulerAngles.z)
					arm.Rotate (new Vector3 (0, 0, -60 * Time.deltaTime));
			}
		}
	}

	IEnumerator Fade(){
		fadeTimer = 5;
		fading = true;
		ps.Play ();
		foreach (SpriteRenderer sr in parts)
			sr.color = new Color (sr.color.r, sr.color.g, sr.color.b, 0);
		foreach (Collider2D c in colliders)
			c.enabled = false;
		body.gravityScale = 0;
		for (float i = 0; i < 1f; i += Time.deltaTime)
			yield return new WaitForSeconds (Time.deltaTime);
		transform.position = new Vector3 (Random.Range (-7, 7), Random.Range (-1, 3));
		ps.Play ();
		foreach (SpriteRenderer sr in parts)
			sr.color = new Color (sr.color.r, sr.color.g, sr.color.b, 1);
		foreach (Collider2D c in colliders)
			c.enabled = true;
		body.gravityScale = 1;
		fading = false;
	}
}
