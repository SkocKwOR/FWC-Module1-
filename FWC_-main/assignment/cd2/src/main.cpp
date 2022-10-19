#include <Arduino.h>
int Y,A,B,C;
void setup()
{
	pinMode(13, OUTPUT);
	pinMode(2, INPUT);
	pinMode(3, INPUT);
	pinMode(4, INPUT);
}
void loop()
{
	A = digitalRead(2);
	B = digitalRead(3);
	C = digitalRead(4);
	Y = !A || !C;
	digitalWrite(13, Y);
}



