function Update()
{
 if(Input.GetKeyDown("r"))
 {
  // Plays the reload animation - stops all other animations
  GetComponent.<Animation>().Play("P90_Reload");
 }
}