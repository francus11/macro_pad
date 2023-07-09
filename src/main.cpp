#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
   // put your setup code here, to run once:
	Serial.begin(115200);
	Serial.println("Hello");
   pinMode(6, OUTPUT);
   
	digitalWrite(6, LOW);

}

void loop() {
   pinMode(2, INPUT_PULLUP);
   if (digitalRead(2) == LOW)
   {
	   Serial.println("Pushed 1");
   }
   pinMode(2, INPUT);
   pinMode(3, INPUT_PULLUP);
   if (digitalRead(3) == LOW)
   {
	   Serial.println("Pushed 2");
   }
   pinMode(3, INPUT);
   pinMode(4, INPUT_PULLUP);
   if (digitalRead(4) == LOW)
   {
	   Serial.println("Pushed 3");
   }
   pinMode(4, INPUT);
   pinMode(5, INPUT_PULLUP);
   if (digitalRead(5) == LOW)
   {
	   Serial.println("Pushed 4");
   }
   pinMode(5, INPUT);
}


// put function definitions here:
int myFunction(int x, int y) {
	return x + y;

}