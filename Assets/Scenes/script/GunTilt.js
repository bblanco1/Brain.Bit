#pragma strict
var smoothGun : float = 2;
var tiltAngle : float = 30;

function Update () {
var TiltGun = Input.GetAxis("Horizontal") * tiltAngle;
var target : Quaternion = Quaternion.Euler(0, 0, TiltGun);
transform.localRotation = Quaternion.Slerp(transform.localRotation, target, Time.deltaTime * smoothGun);
}