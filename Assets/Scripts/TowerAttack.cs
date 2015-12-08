using UnityEngine;
using System.Collections;

public class TowerAttack : MonoBehaviour {

	public float timeBetweenBullets = 0.15f;
	public float damagerPerShot = 20f;

	float timer;
	Ray shootRay;
	RaycastHit shootHit;
	LineRenderer gunLine;
	AudioSource gunAudio;
	
	float effectsDisplayTime = 0.2f;

	// Use this for initialization
	void Awake () {
	

		gunLine = GetComponent <LineRenderer> ();
		gunAudio = GetComponent<AudioSource> ();


	}
	
	// Update is called once per frame
	void Update () {

		timer += Time.deltaTime; 

		if(timer >= timeBetweenBullets * effectsDisplayTime)
		{
			DisableEffects ();
		}

	
	}

	public void DisableEffects ()
	{
		gunLine.enabled = false;

	}

	void Attack(ZombieHealth enemyToDamage, ZombieMovement pointToHit)
	{
		timer = 0f;
		
		
		gunAudio.Play ();

		gunLine.enabled = true;
		gunLine.SetPosition (0, new Vector3(transform.position.x, transform.position.y + 8.5f, transform.position.z));

		shootRay.origin = transform.position;
		shootRay.direction = transform.forward;

		gunLine.SetPosition (1, new Vector3(pointToHit.transform.position.x, pointToHit.transform.position.y + 0.8f, pointToHit.transform.position.z));
		

		enemyToDamage.decreaseHealth ();

	}

	void OnTriggerEnter(Collider other)
	{

		if (other.GetComponentInChildren<ZombieHealth>()) {

			Attack(other.GetComponentInChildren<ZombieHealth>(), other.GetComponent<ZombieMovement>());
		}
	}

	void OnTriggerStay(Collider other)
	{
		if (other.GetComponentInChildren<ZombieHealth> ()) {
			Debug.Log ("smang that enemy health level at" + other.GetComponentInChildren<ZombieHealth>().health);
			if (timer >= timeBetweenBullets) {

						Attack(other.GetComponentInChildren<ZombieHealth>(), other.GetComponent<ZombieMovement>());
			}
		}

	}





}
