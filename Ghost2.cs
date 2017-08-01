using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ghost2 : MonoBehaviour {
	GameObject player, plnt;
	PC controller;
	public Rigidbody2D body;
	public SpriteRenderer color;
	public Sprite N, H;
	float speed = 25, deathTime = 2f;
	float health = 1;
	public bool lit = false;
	// Use this for initialization
	void Start () {
		speed = Random.Range (100, 200);
		player = GameObject.FindGameObjectWithTag ("Player");
		controller = player.GetComponent<PC> ();
		plnt = GameObject.FindGameObjectWithTag ("Stem");
	}

	// Update is called once per frame
	void Update () {
		float disPlyr = Vector3.Distance (player.transform.position, transform.position), disPlnt = Vector3.Distance (plnt.transform.position, transform.position);
		Vector3 relPos;
		if(disPlyr - 4 < disPlnt)
			relPos = player.transform.position - transform.position;
		else 
			relPos = plnt.transform.position - transform.position;
		float angle = Mathf.Atan2 (relPos.y, relPos.x) * Mathf.Rad2Deg - 90;
		if (lit) {
			health -= Time.deltaTime / deathTime;
			color.sprite = H;
		} else {
			health = Mathf.Clamp (health + Time.deltaTime * 0.1f, 0, 1);
			color.sprite = N;
		}
		if (health <= 0) 
			Destroy (this.gameObject);
		color.color = Color.Lerp (new Color (1, 1, 1, 0f), Color.white, health);
		transform.localRotation = Quaternion.Euler (0, 0, angle);
		if(lit)
			body.AddForce (relPos.normalized * Time.deltaTime * speed / 2);
		else 
			body.AddForce (relPos.normalized * Time.deltaTime * speed);
		float moveAngle = Mathf.Atan2 (body.velocity.y, body.velocity.x) * Mathf.Rad2Deg - 90;
		if (Mathf.Abs (angle - moveAngle) > 60)
			body.drag = 1;
		else
			body.drag = 0;
		if (body.velocity.magnitude > 1f) {
			body.velocity = body.velocity.normalized * 1;
		}
	}

	void OnTriggerStay2D(Collider2D coll){
		if (coll.tag == "Light") 
			lit = true;
		else if (coll.tag == "Player" && !lit) 
			controller.loseEnergy (0.15f * Time.deltaTime);
	}

	void OnTriggerExit2D(Collider2D coll){
		if (coll.tag == "Light")
			lit = false;
	}
}
