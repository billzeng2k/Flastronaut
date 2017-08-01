using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GM : MonoBehaviour {
	public GameObject ghost1, ghost2, ghost3, antinaut;
	public PC pc;
	public Plant plant;
	float g1RT = 4, g1T = 0, g2RT = 6, g2T = 0.1f, g3RT = 7, g3T = 0.1f;
	bool g1 = false, g2 = false, g3 = false, tut = true;
	static bool tutOn = true;
	public Text[] tutorial;
	public GameObject energyBar, plantBar;
	// Use this for initialization
	void Start () {
		Physics2D.IgnoreLayerCollision (8, 9);
		Physics2D.IgnoreLayerCollision (9, 10);
		if (tutOn) {
			StartCoroutine (Tutorial ());
			tutOn = false;
		} else {
			g1 = true;
			tut = false;
			plant.growth = 0.3f;
			plant.alive = true;
			pc.sT = true;
			pc.cT = true;
			energyBar.SetActive (true);
			plantBar.SetActive (true);
			tutorial [0].gameObject.SetActive (false);
			pc.energy = 1;
		}
	}
	
	// Update is called once per frame
	void Update () {
		if (tut)
			return;
		if(g1)
			g1T -= Time.deltaTime;
		if(g2)
			g2T -= Time.deltaTime;
		if(g3)
			g3T -= Time.deltaTime;
		if (g1T <= 0) {
			SpawnGhost (ghost1);
			g1T = g1RT;
		}
		if (g2T <= 0) {
			SpawnGhost (ghost2);
			g2T = g2RT;
		}
		if (g3T <= 0) {
			SpawnGhost (ghost3);
			g3T = g3RT;
		}
	}

	void SpawnGhost(GameObject ghost){
		switch(Random.Range(0, 3)){
		case 0:
			Instantiate (ghost, new Vector3 (Random.Range(-1, 10), 6, 0), Quaternion.Euler (0, 0, 0));
			break;
		case 1:
			Instantiate (ghost, new Vector3 (Random.Range(-10, 10), -6, 0), Quaternion.Euler (0, 0, 0));
			break;
		case 2:
			Instantiate (ghost, new Vector3 (-10, Random.Range(-6, 6), 0), Quaternion.Euler (0, 0, 0));
			break;
		case 3:
			Instantiate (ghost, new Vector3 (10, Random.Range(-6, 6), 0), Quaternion.Euler (0, 0, 0));
			break;
		}
	}

	IEnumerator Tutorial(){
		string A = "'A'", D = "'D'", W = "'W'";
		for (bool a = false, d = false, w = false; !a || !d || !w;) {
			yield return new WaitForSeconds (0.01f);
			if (Input.GetKey (KeyCode.A) && !a) {
				a = true;
				A = "<color=#00ff00>'A'</color>";
			}
			if (Input.GetKey (KeyCode.D) && !d) {
				d = true;
				D = "<color=#00ff00>'D'</color>";
			}
			if (Input.GetKey (KeyCode.W) && !w) {
				w = true;
				W = "<color=#00ff00>'W'</color>";
			}
			tutorial [0].text = "^ THIS IS YOU ^\nPRESS " + A + " AND " + D + " TO MOVE\nPRESS " + W + " TO JUMP";
		}
		for (float i = 0; i < 0.5f; i += Time.deltaTime) {
			yield return new WaitForSeconds (Time.deltaTime);
			tutorial [0].color = Color.Lerp (Color.white, new Color (1, 1, 1, 0), i * 2);
			string color = ColorUtility.ToHtmlStringRGBA (new Color (0, 1, 0, Mathf.Lerp (1, 0, i * 2)));
			A = "<color=#" + color + ">'A'</color>";
			D = "<color=#" + color + ">'D'</color>";
			W = "<color=#" + color + ">'W'</color>";
			tutorial [0].text = "^ THIS IS YOU ^\nPRESS " + A + " AND " + D + " TO MOVE\nPRESS " + W + " TO JUMP";
		}
		tutorial [0].gameObject.SetActive (false);
		tutorial [1].text = "THE <color=#ffce0000>YELLOW BAR</color> IS HOW MUCH \nPOWER YOUR FLASHLIGHT HAS\nHOLD DOWN 'S' TO CHARGE";
		energyBar.SetActive (true);
		tutorial [1].gameObject.SetActive (true);
		pc.sT = true;
		for (float i = 0; i < 0.5f; i += Time.deltaTime) {
			yield return new WaitForSeconds (Time.deltaTime);
			tutorial [1].color = Color.Lerp (new Color (1, 1, 1, 0), Color.white, i * 2);
			tutorial [1].text = "THE <color=#" + ColorUtility.ToHtmlStringRGBA(new Color(1, 206/255f, 0, Mathf.Lerp (0, 1, i * 2))) + ">YELLOW BAR</color> IS HOW MUCH \nPOWER YOUR FLASHLIGHT HAS\nHOLD DOWN 'S' TO CHARGE";
		}
		tutorial [1].color = Color.white;
		for (bool s = false; !s;) {
			yield return new WaitForSeconds (0.01f);
			if (Input.GetKey (KeyCode.S)) {
				s = true;
				tutorial [1].text = "THE <color=#ffce00ff>YELLOW BAR</color> IS HOW MUCH \nPOWER YOUR FLASHLIGHT HAS\nHOLD DOWN <color=#00ff00ff>'S'</color> TO CHARGE";
			}
		}
		for (float i = 0; i < 0.5f; i += Time.deltaTime) {
			yield return new WaitForSeconds (Time.deltaTime);
			tutorial [1].color = Color.Lerp (Color.white, new Color (1, 1, 1, 0),  i * 2);
			tutorial [1].text = "THE <color=#" + ColorUtility.ToHtmlStringRGBA(new Color(1, 206/255f, 0, Mathf.Lerp (1, 0, i * 2))) + ">YELLOW BAR</color> IS HOW MUCH \nPOWER YOUR FLASHLIGHT HAS\nHOLD DOWN <color=#" + ColorUtility.ToHtmlStringRGBA(new Color (0, 1, 0, Mathf.Lerp (1, 0, i * 2))) + ">'S'</color> TO CHARGE";
		}
		tutorial [1].gameObject.SetActive (false);
		tutorial [2].text = "TURN YOUR FLASHLIGHT ON AND OFF BY\nCLICKING THE LEFT MOUSE BUTTON\nBUT BE CAREFUL, USING YOUR FLASHLIGHT DRAINS <color=#ffce0000>POWER</color>";
		tutorial [2].gameObject.SetActive (true);
		for (float i = 0; i < 0.5f; i += Time.deltaTime) {
			yield return new WaitForSeconds (Time.deltaTime);
			tutorial [2].color = Color.Lerp (new Color (1, 1, 1, 0), Color.white, i * 2);
			tutorial [2].text = "TURN YOUR FLASHLIGHT ON AND OFF BY\nCLICKING THE LEFT MOUSE BUTTON\nBUT BE CAREFUL, USING YOUR FLASHLIGHT DRAINS <color=#" + ColorUtility.ToHtmlStringRGBA(new Color(1, 206/255f, 0, Mathf.Lerp (0, 1, i * 2))) + ">POWER</color>";
		}
		for (bool lm = false; !lm;) {
			yield return new WaitForSeconds (0.01f);
			pc.cT = true;
			if (Input.GetMouseButtonDown(0)) {
				lm = true;
				tutorial [2].text = "TURN YOUR FLASHLIGHT ON AND OFF BY\nCLICKING THE <color=#00ff00ff>LEFT MOUSE</color> BUTTON\nBUT BE CAREFUL, USING YOUR FLASHLIGHT DRAINS <color=#ffce00ff>POWER</color>";
			}
		}
		for (float i = 0; i < 0.5f; i += Time.deltaTime) {
			yield return new WaitForSeconds (Time.deltaTime);
			tutorial [2].color = Color.Lerp (Color.white, new Color (1, 1, 1, 0),  i * 2);
			tutorial [2].text = "TURN YOUR FLASHLIGHT ON AND OFF BY\nCLICKING THE <color=#" + ColorUtility.ToHtmlStringRGBA (new Color (0, 1, 0, Mathf.Lerp (1, 0, i * 2))) + ">LEFT MOUSE</color> BUTTON\nBUT BE CAREFUL, USING YOUR FLASHLIGHT DRAINS <color=#" + ColorUtility.ToHtmlStringRGBA(new Color(1, 206/255f, 0, Mathf.Lerp (1, 0, i * 2))) + ">POWER</color>";
		}
		tutorial [2].gameObject.SetActive (false);
		tutorial [3].text = "THE <color=#009c2800>GREEN BAR</color> IS YOUR \nPLANT'S GROWTH PROCESS\nSHINE THE <color=#ffce0000>LIGHT</color> AT THE PLANT TO MAKE IT GROW!";
		plantBar.SetActive (true);
		tutorial [3].gameObject.SetActive (true);
		plant.alive = true;
		for (float i = 0; i < 0.5f; i += Time.deltaTime) {
			yield return new WaitForSeconds (Time.deltaTime);
			tutorial [3].color = Color.Lerp (new Color (1, 1, 1, 0), Color.white, i * 2);
			tutorial [3].text = "THE <color=#" + ColorUtility.ToHtmlStringRGBA(new Color(0, 156/255f, 40/255f, Mathf.Lerp (0, 1, i * 2))) + ">GREEN BAR</color> IS YOUR \nPLANT'S GROWTH PROCESS\nSHINE THE <color=#" + ColorUtility.ToHtmlStringRGBA(new Color(1, 206/255f, 0, Mathf.Lerp (0, 1, i * 2))) + ">LIGHT</color> AT THE PLANT TO MAKE IT GROW!";
		}
		while (plant.growth <= 0.3f)
			yield return new WaitForSeconds (0.01f);
		plant.alive = false;
		for (float i = 0; i < 0.5f; i += Time.deltaTime) {
			yield return new WaitForSeconds (Time.deltaTime);
			tutorial [3].color = Color.Lerp (Color.white, new Color (1, 1, 1, 0),  i * 2);
			tutorial [3].text = "THE <color=#" + ColorUtility.ToHtmlStringRGBA(new Color(0, 156/255f, 40/255f, Mathf.Lerp (1, 0, i * 2))) + ">GREEN BAR</color> IS YOUR \nPLANT'S GROWTH PROCESS\nSHINE THE <color=#" + ColorUtility.ToHtmlStringRGBA(new Color(1, 206/255f, 0, Mathf.Lerp (1, 0, i * 2))) + ">LIGHT</color> AT THE PLANT TO MAKE IT <color=#" + ColorUtility.ToHtmlStringRGBA (new Color (0, 1, 0, Mathf.Lerp (1, 0, i * 2))) + ">GROW!</color>";
		}
		tutorial [3].gameObject.SetActive (false);
		tutorial [4].text = "CAREFUL HERO! A <color=#00000000>GHOST</color> IS COMING\n<color=#00000000>GHOST</color> DRAIN <color=#ffce0000>POWER</color> AND <color=#009c2800>GROWTH</color> ON CONTACT\nSHINE YOUR FLASHLIGHT AT THE <color=#00000000>GHOST</color> TO KILL IT";
		tutorial [4].gameObject.SetActive (true);
		for (float i = 0; i < 0.5f; i += Time.deltaTime) {
			yield return new WaitForSeconds (Time.deltaTime);
			tutorial [4].color = Color.Lerp (new Color (1, 1, 1, 0), Color.white, i * 2);
			tutorial [4].text = "CAREFUL HERO! A <color=#" + ColorUtility.ToHtmlStringRGBA(new Color(0, 0, 0, Mathf.Lerp (0, 1, i * 2))) + ">GHOST</color> IS COMING\n<color=#" + ColorUtility.ToHtmlStringRGBA(new Color(0, 0, 0, Mathf.Lerp (0, 1, i * 2))) + ">GHOSTS</color> DRAIN <color=#" + ColorUtility.ToHtmlStringRGBA(new Color(1, 206/255f, 0, Mathf.Lerp (0, 1, i * 2))) + ">POWER</color> AND <color=#" + ColorUtility.ToHtmlStringRGBA(new Color(0, 156/255f, 40/255f, Mathf.Lerp (0, 1, i * 2))) + ">GROWTH</color> ON CONTACT\n<color=#" + ColorUtility.ToHtmlStringRGBA(new Color(1, 206/255f, 0, Mathf.Lerp (0, 1, i * 2))) + ">SHINE</color> YOUR FLASHLIGHT AT THE <color=#" + ColorUtility.ToHtmlStringRGBA(new Color(0, 0, 0, Mathf.Lerp (0, 1, i * 2))) + ">GHOST</color> TO KILL IT";
		}
		GameObject g = (GameObject) Instantiate (ghost1, new Vector3 (3, 7, 0), Quaternion.Euler (0, 0, 0));
		while (g != null)
			yield return new WaitForSeconds (0.01f);
		for (float i = 0; i < 0.5f; i += Time.deltaTime) {
			yield return new WaitForSeconds (Time.deltaTime);
			tutorial [4].color = Color.Lerp (Color.white, new Color (1, 1, 1, 0), i * 2);
			tutorial [4].text = "CAREFUL HERO! A <color=#" + ColorUtility.ToHtmlStringRGBA(new Color(0, 0, 0, Mathf.Lerp (1, 0, i * 2))) + ">GHOST</color> IS COMING\n<color=#" + ColorUtility.ToHtmlStringRGBA(new Color(0, 0, 0, Mathf.Lerp (1, 0, i * 2))) + ">GHOSTS</color> DRAIN <color=#" + ColorUtility.ToHtmlStringRGBA(new Color(1, 206/255f, 0, Mathf.Lerp (1, 0, i * 2))) + ">POWER</color> AND <color=#" + ColorUtility.ToHtmlStringRGBA(new Color(0, 156/255f, 40/255f, Mathf.Lerp (1, 0, i * 2))) + ">GROWTH</color> ON CONTACT\n<color=#" + ColorUtility.ToHtmlStringRGBA(new Color(1, 206/255f, 0, Mathf.Lerp (1, 0, i * 2))) + ">SHINE</color> YOUR FLASHLIGHT AT THE <color=#" + ColorUtility.ToHtmlStringRGBA(new Color(0, 0, 0, Mathf.Lerp (1, 0, i * 2))) + ">GHOST</color> TO KILL IT";
		}
		tutorial [4].gameObject.SetActive (false);
		tutorial [5].text = "BEST OF LUCK ON YOUR ADVENTURE HERO!";
		tutorial [5].gameObject.SetActive (true);
		for (float i = 0; i < 0.5f; i += Time.deltaTime) {
			yield return new WaitForSeconds (Time.deltaTime);
			tutorial [5].color = Color.Lerp (new Color (1, 1, 1, 0), Color.white, i * 2);
		}
		g1 = true;
		tut = false;
		plant.alive = true;
		for(float i = 0; i < 2; i+= Time.deltaTime)
			yield return new WaitForSeconds (Time.deltaTime);
		for (float i = 0; i < 0.5f; i += Time.deltaTime) {
			yield return new WaitForSeconds (Time.deltaTime);
			tutorial [5].color = Color.Lerp (Color.white, new Color (1, 1, 1, 0), i * 2);
		}
		tutorial [5].gameObject.SetActive (false);
	}

	public void G2(){
		g1RT = 3;
		g2 = true;
	}

	public void G3(){
		g1RT = 2.5f;
		g2RT = 5; 
		g3 = true;
	}

	public void G4(){
		Instantiate (antinaut, new Vector3 (-4, 6), Quaternion.Euler (0, 0, 0));
	}
}
