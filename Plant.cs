using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Plant : MonoBehaviour {
	public GameObject[] G;
	public Transform shine;
	public GM gm;
	public RectTransform growthBar, danger;
	int curPlant = 0;
	public float growth = 0.25f, notHit = 10;
	public bool alive = false, lost = false, won = false;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (notHit < 0.1f && !lost)
			G [curPlant].GetComponent<SpriteRenderer> ().color = new Color (0.8f, 0.8f, 0.8f, 1f);
		else if (!lost)
			G [curPlant].GetComponent<SpriteRenderer> ().color = Color.white;
		notHit += Time.deltaTime;
		if (Input.GetKeyDown(KeyCode.Space))
			StartCoroutine (winGame ());
		if(!alive)
			transform.localScale = new Vector3 (0.1f, 0.5f);
		growthBar.localPosition = new Vector3 (0, -388 * (1-growth));
		if (growth >= 1) {
			growth = 0.3f;
			G [curPlant].SetActive (false);
			G [++curPlant].SetActive (true);
			if (curPlant == 1)
				gm.G2 ();
			else if (curPlant == 2)
				gm.G3 ();
			else if (curPlant == 3)
				gm.G4 ();
			else if (curPlant == 4)
				StartCoroutine (winGame ());
		} else if (growth <= 0) {
			danger.localPosition = new Vector3 (0, -388 * growth * 2 - 388);
		} else if (growth >= 0) {
			danger.localPosition = new Vector3 (0, -400);
		} 
		if (growth <= -0.5f && !lost)
			StartCoroutine (lolScrub ());
	}

	void OnTriggerStay2D(Collider2D coll){
		if (coll.tag == "Light" && alive) {
			growth += Time.deltaTime / (8 + curPlant * 2);
			transform.localScale = new Vector3 (0.1f * 1.05f, 0.5f * 1.05f);
		} else if (coll.tag == "Ghost1" && !coll.GetComponent<Ghost1> ().lit) {
			growth -= Time.deltaTime / 13;
			notHit = 0;
		} else if (coll.tag == "Ghost2" && !coll.GetComponent<Ghost2> ().lit) {
			growth -= Time.deltaTime / 10;
			notHit = 0;
		} else if (coll.tag == "AntiLight") {
			growth -= Time.deltaTime / 13;
			notHit = 0;
		}
	}

	void OnTriggerExit2D(Collider2D coll){
		if (coll.tag == "Light" && alive) {
			growth += Time.deltaTime / (8 + curPlant * 2);
			transform.localScale = new Vector3 (0.1f, 0.5f);
		} 
	}

	IEnumerator winGame(){
		won = true;
		GameObject.FindGameObjectWithTag ("Music").GetComponent<DontDestoryOnLoad> ().win ();
		gm.enabled = false;
		GameObject.FindGameObjectWithTag ("Player").GetComponent<PC> ().enabled = false;
		if (GameObject.FindGameObjectWithTag ("Antiplayer") != null)
			GameObject.FindGameObjectWithTag ("Antiplayer").GetComponent<AI> ().enabled = false;
		if (GameObject.FindGameObjectWithTag ("UI") != null)
			GameObject.FindGameObjectWithTag ("UI").SetActive (false);
		foreach (GameObject g in GameObject.FindGameObjectsWithTag("Ghost1")) 
			g.GetComponent<Ghost1> ().enabled = false;
		foreach (GameObject g in GameObject.FindGameObjectsWithTag("Ghost2")) 
			g.GetComponent<Ghost2> ().enabled = false;
		foreach (GameObject g in GameObject.FindGameObjectsWithTag("Ghost3")) 
			g.GetComponent<Ghost3> ().enabled = false;
		shine.transform.localScale = Vector3.zero;
		for (float i = 0; i < 2; i += Time.deltaTime) 
			yield return new WaitForSeconds (Time.deltaTime);
		shine.transform.localScale = Vector3.one * 0.5f;
		for (float i = 0; i < 3; i += Time.deltaTime) {
			yield return new WaitForSeconds (Time.deltaTime);
			shine.transform.localScale += Vector3.one * 10 * Time.deltaTime;
		}
		SceneManager.LoadScene ("WinScreen");
	}

	IEnumerator lolScrub(){
		if (!won) {
			GameObject.FindGameObjectWithTag ("Music").GetComponent<DontDestoryOnLoad> ().lose ();
			alive = false;
			lost = true;
			gm.enabled = false;
			GameObject.FindGameObjectWithTag ("Player").GetComponent<PC> ().enabled = false;
			if (GameObject.FindGameObjectWithTag ("Antiplayer") != null)
				GameObject.FindGameObjectWithTag ("Antiplayer").GetComponent<AI> ().enabled = false;
			if (GameObject.FindGameObjectWithTag ("UI") != null)
				GameObject.FindGameObjectWithTag ("UI").SetActive (false);
			foreach (GameObject g in GameObject.FindGameObjectsWithTag("Ghost1"))
				g.GetComponent<Ghost1> ().enabled = false;
			foreach (GameObject g in GameObject.FindGameObjectsWithTag("Ghost2"))
				g.GetComponent<Ghost2> ().enabled = false;
			foreach (GameObject g in GameObject.FindGameObjectsWithTag("Ghost3"))
				g.GetComponent<Ghost3> ().enabled = false;
			shine.transform.localScale = Vector3.zero;
			for (float i = 0; i < 1; i += Time.deltaTime)
				yield return new WaitForSeconds (Time.deltaTime);
			for (float i = 0; i < 1; i += Time.deltaTime) {
				yield return new WaitForSeconds (Time.deltaTime);
				G [curPlant].GetComponent<SpriteRenderer> ().color = Color.Lerp (new Color (0.8f, 0.8f, 0.8f, 1), new Color (0, 0, 0, 1), i / 2);
			}
			G [curPlant].GetComponent<SpriteRenderer> ().color = Color.black;
			for (float i = 0; i < 1; i += Time.deltaTime)
				yield return new WaitForSeconds (Time.deltaTime);
			SceneManager.LoadScene ("LoseScreen");
		}
	}
}
