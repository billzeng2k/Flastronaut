using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DrainPower : MonoBehaviour {
	PC pc;
	// Use this for initialization
	void Start () {
		pc = GameObject.FindGameObjectWithTag ("Player").GetComponent<PC> ();
	}
	
	void OnTriggerStay2D(Collider2D coll){
		if (coll.tag == "Player")
			pc.loseEnergy (0.15f * Time.deltaTime);
	}
}
