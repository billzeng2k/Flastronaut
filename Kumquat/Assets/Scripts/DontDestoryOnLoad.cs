using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class DontDestoryOnLoad : MonoBehaviour {
	public AudioSource n, w, l;

	// Use this for initialization
	void Awake () {
		DontDestroyOnLoad (transform.gameObject);
	}

	void Start(){
		neutral ();
	}
	
	// Update is called once per frame
	void Update () {

	}

	public void lose(){
		n.Stop ();
		w.Stop ();
		l.Play ();
	}

	public void win (){
		n.Stop ();
		w.Play ();
		l.Stop ();
	}

	public void neutral(){
		n.Play ();
		w.Stop ();
		l.Stop ();
	}
}
