#include <Arduino.h>
#include <HID-Project.h>


// put function declarations here:
int myFunction(int, int);

byte responce[4][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20}
   };

void setup() {
   // put your setup code here, to run once:
	Serial.begin(115200);
	Serial.println("Hello");
   Keyboard.begin();
   NKROKeyboard.begin();
   Consumer.begin();
   pinMode(6, OUTPUT);
   pinMode(2, INPUT_PULLUP);
   pinMode(3, INPUT_PULLUP);
   pinMode(4, INPUT_PULLUP);
   pinMode(5, INPUT_PULLUP);
   
	digitalWrite(6, LOW);

}

void loop() {
   if (Serial)
   {
      Serial.println("Hello");
   }
   if (digitalRead(2) == LOW)
   {
	   Serial.println("Pushed 1");
      NKROKeyboard.add(KEY_RIGHT_ALT);
      NKROKeyboard.add('l');
      NKROKeyboard.send();

      NKROKeyboard.releaseAll();

      delay(100);
   }
   if (digitalRead(3) == LOW)
   {
	   Serial.println("Pushed 2");
      System.write(SYSTEM_SLEEP);
   }
   if (digitalRead(4) == LOW)
   {
	   Serial.println("Pushed 3");
      Consumer.write(MEDIA_VOLUME_DOWN);
      delay(200);
   }
   if (digitalRead(5) == LOW)
   {
      Consumer.press(MEDIA_VOLUME_UP);
      Consumer.release(MEDIA_VOLUME_UP);

      delay(100);

   }
}


// put function definitions here:
int myFunction(int x, int y) {
	return x + y;

}