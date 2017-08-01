using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FadeOut : MonoBehaviour {
	public Image img;
	// Use this for initialization
	void Start () {
		StartCoroutine (fadeOut ());
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	IEnumerator fadeOut(){
		for (float i = 0; i < 3; i += Time.deltaTime) {
			yield return new WaitForSeconds (Time.deltaTime);
			img.color = Color.Lerp (new Color (1, 240 / 255f, 53 / 255f, 1), new Color (1, 240 / 255f, 53 / 255f, 0), i / 3);
		}
		img.color = new Color (0, 0, 0, 0);
	}
}
