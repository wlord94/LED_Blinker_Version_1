//LED blinken
/*LED blinkt im Stundentakt
 *Programmierer Wuest
 *letzte Änderung: 11.9.20
 *Version 0.01
 *
*/

#define grueneLED 3   //grüne LED an Pin 3


void setup()
{
  pinMode(3, OUTPUT);   //LED
  Serial.begin(9600);   //Kontrollanzeige

}

void loop()
{

  /******************* LED im sekundentakt an- und ausschalten ***************/
  digitalWrite(grueneLED, HIGH);    //LED an
  Serial.println("LED an ");
  delay(1000);
  digitalWrite(grueneLED, LOW);
  Serial.println("LED aus ");   //LED aus
  delay(1000);

}
