#pragma strict
 
var smoothGun : float = 2;
var tiltAngle : float = 30;
var amount : float = 0.02;
var maxAmount : float = 0.03;
var Smooth : float = 3;
var SmoothRotation = 2;
 
private var def : Vector3;
 
function Start ()
{
    def = transform.localPosition;
}
 
function Update ()
{
 
var TiltGun = Input.GetAxis("Horizontal") * tiltAngle;
 
var target2 : Quaternion = Quaternion.Euler(0, 0, TiltGun);
 
transform.localRotation = Quaternion.Slerp(transform.localRotation, target2, Time.deltaTime * smoothGun);
 
        var factorX : float = -Input.GetAxis("Mouse X") * amount;
        var factorY : float = -Input.GetAxis("Mouse Y") * amount;
       
        if (factorX > maxAmount)
            factorX = maxAmount;
       
        if (factorX < -maxAmount)
                factorX = -maxAmount;
 
        if (factorY > maxAmount)
                factorY = maxAmount;
       
        if (factorY < -maxAmount)
                factorY = -maxAmount;
               
 
        var Final : Vector3 = new Vector3(def.x+factorX, def.y+factorY, def.z);
        transform.localPosition = Vector3.Lerp(transform.localPosition, Final, Time.deltaTime * Smooth);
       
             
        var tiltAroundZ = Input.GetAxis("Mouse X") * tiltAngle;
        var tiltAroundX = Input.GetAxis("Mouse Y") * tiltAngle;
        var target = Quaternion.Euler (tiltAroundX, 0, tiltAroundZ);
        transform.localRotation = Quaternion.Slerp(transform.localRotation, target,Time.deltaTime * SmoothRotation);    
}