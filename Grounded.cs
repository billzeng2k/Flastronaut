using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Grounded : MonoBehaviour {
	public PC player;
	void OnTriggerStay2D(Collider2D coll){
		if (coll.tag == "Ground") 
			player.grounded = true;
	}

	void OnTriggerExit2D(Collider2D coll){
		if (coll.tag == "Ground") 
			player.grounded = false;
	}
}
