using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PC : MonoBehaviour {
	public Transform arm;
	public GameObject lightSource;
	public Animator anim; 
	public RectTransform energyBar;
	public Rigidbody2D body;
	public GameObject flashLight;
	public SpriteRenderer[] parts;
	public AudioSource click;
	public bool grounded = true;
	bool lightOn = false, stayOn = false;
	int speed = 300;
	public float energy = 0.7f, intensity = 1, chargeTime = 0, notHit = 1;
	public bool sT = false, cT = false;

	void Start () {
		anim.SetBool ("Crank", false);
		anim.SetBool ("Walk", false);
	}
		
	void Update () {
		anim.SetBool ("Grounded", grounded);
		energyBar.localPosition = new Vector3 (0, -388 * (1-energy));
		if (notHit < 0.1f) {
			foreach(SpriteRenderer sr in parts)
				sr.color = new Color (0.8f, 0.8f, 0.8f, 1f);
		} else if (notHit > 0.1 && notHit < 1) {
			foreach (SpriteRenderer sr in parts)
				sr.color = Color.white;
		}
		notHit += Time.deltaTime;
		if (lightOn) {
			lightSource.SetActive (true);
			intensity = Mathf.Clamp (energy * 10f, 2f, 7.5f);
			lightSource.transform.localScale = Vector3.one * intensity;
			energy = Mathf.Max (energy - Time.deltaTime * 0.05f, 0);
			if (energy == 0)
				lightOn = false;
		} else
			lightSource.SetActive (false);
		if (Input.GetKeyDown (KeyCode.S) && grounded && sT) {
			stayOn = lightOn;
			body.velocity = new Vector2 (0, body.velocity.y);
			chargeTime = 0;
		}else if (Input.GetKey (KeyCode.S) && grounded && sT) {
			anim.SetBool ("Crank", true);
			anim.SetBool ("Walk", false);
			arm.rotation = Quaternion.Euler (0, 0, 0);
			lightOn = false;
			energy = Mathf.Min(energy + Time.deltaTime * 0.15f + Time.deltaTime * chargeTime * 0.05f, 1);
			chargeTime += Time.deltaTime;
		} else if (Input.GetKeyUp (KeyCode.S) && grounded && sT) {
			lightOn = stayOn;
		} else {
			if (Input.GetMouseButtonDown (0) && energy > 0 && cT) {
				click.Play ();
				lightOn = !lightOn;
			}
			anim.SetBool ("Crank", false);
			Vector3 mousePos = Camera.main.ScreenToWorldPoint (Input.mousePosition);
			Vector3 relPos = mousePos - arm.position;
			if (relPos.x < 0) 
				transform.localScale = new Vector3 (-0.8f, 0.8f, 1);
			else 
				transform.localScale = new Vector3 (0.8f, 0.8f, 1);
			arm.rotation = Quaternion.Euler (0, 0, Mathf.Atan2 (relPos.y, relPos.x) * Mathf.Rad2Deg + 90);
			if (Input.GetKeyDown (KeyCode.W) && grounded) {
				body.AddForce (Vector2.up * 300);
			} else if (Input.GetKey (KeyCode.W)) {
				body.gravityScale = 0.4f;
			} else if (Input.GetKeyUp (KeyCode.W) || body.velocity.y < 0) {
				body.gravityScale = 1;
			}
			if (Input.GetKey (KeyCode.D)) {
				anim.SetBool ("Walk", true);
				body.velocity = new Vector2 (Time.deltaTime * speed, body.velocity.y);
			} else if (Input.GetKey (KeyCode.A)) {
				anim.SetBool ("Walk", true);
				body.velocity = new Vector2 (-Time.deltaTime * speed, body.velocity.y);
			} else {
				anim.SetBool ("Walk", false);
				body.velocity = new Vector2 (0, body.velocity.y);
			}
		}
	}

	public void loseEnergy(float e){
		notHit = 0;
		energy = Mathf.Max (0, energy - e);
	}
}
