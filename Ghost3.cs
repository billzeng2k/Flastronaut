using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ghost3 : MonoBehaviour {
	GameObject player;
	PC controller;
	public Rigidbody2D body;
	public SpriteRenderer[] color;
	public Sprite N, H;
	public Transform hand;
	Plant plant;
	float speed = 400, health = 1, deathTime = 1.5f;
	bool lit = false, gottem = false;
	// Use this for initialization
	void Start () {
		speed = Random.Range (100, 200);
		player = GameObject.FindGameObjectWithTag ("Player");
		controller = player.GetComponent<PC> ();
		plant = GameObject.FindGameObjectWithTag ("Stem").GetComponent<Plant>();
	}

	// Update is called once per frame
	void Update () {
		Vector3 relPos = player.transform.position - transform.position;
		float angle = Mathf.Atan2 (relPos.y, relPos.x) * Mathf.Rad2Deg + 90 - 20;
		if (gottem) 
			angle += 180;
		if (lit) {
			angle += 180;
			relPos *= -1;
			health -= Time.deltaTime / deathTime;
			color[0].sprite = H;
		} else {
			health = Mathf.Clamp (health + Time.deltaTime * 0.1f, 0, 1);
			color[0].sprite = N;
		}
		if (health <= 0) 
			Destroy (this.gameObject);
		foreach (SpriteRenderer sr in color) 
			sr.color = Color.Lerp (new Color (1, 1, 1, 0f), Color.white, health);
		transform.localRotation = Quaternion.Euler (0, 0, angle);
		Vector2 force = new Vector2 (Mathf.Cos ((angle - 90) * Mathf.Deg2Rad), Mathf.Sin ((angle - 90) * Mathf.Deg2Rad));
		body.AddForce (force * Time.deltaTime * speed);
		float moveAngle = Mathf.Atan2 (body.velocity.y, body.velocity.x) * Mathf.Rad2Deg + 90 - 45;
		if (Mathf.Abs (angle - moveAngle) > 90)
			body.drag = 0.5f;
		else
			body.drag = 0;
		if (body.velocity.magnitude > 5) {
			body.velocity = body.velocity.normalized * 5;
		}
	}
		
	void OnTriggerStay2D(Collider2D coll){
		if (coll.tag == "Light") {
			lit = true;
		} else if (coll.tag == "Player" && !lit) {
			controller.flashLight.transform.SetParent (hand.transform);
			gottem = true;
			StartCoroutine (lose ());
		}
	}

	void OnTriggerExit2D(Collider2D coll){
		if (coll.tag == "Light")
			lit = false;
	}

	IEnumerator lose(){
		for (float i = 0; i < 1.5; i += Time.deltaTime)
			yield return new WaitForSeconds (Time.deltaTime);
		plant.growth = -10;
	}
}
