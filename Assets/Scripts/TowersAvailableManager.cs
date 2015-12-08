using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class TowersAvailableManager : MonoBehaviour
{
	public static int towersAvailable;
	
	
	Text text;
	
	
	void Awake ()
	{
		text = GetComponent <Text> ();
		towersAvailable = 2;
	}
	
	
	void Update ()
	{
		text.text = "Towers Remaining: " + towersAvailable;
	}
}