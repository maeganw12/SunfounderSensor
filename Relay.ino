/**********************************************/
const int relayPin =5; //the "s" of relay module attach to
int brightness = 0;
int fadeAmount = 5;
/**********************************************/
void setup()
{
  pinMode(relayPin, OUTPUT); //initialize relay as an output
}
/***********************************************/
void loop()
{
  analogWrite(relayPin, brightness); //Close the relay
  brightness = brightness + fadeAmount;
   // reverse the direction of the fading at the ends of the fade:
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}
/*************************************************/

