//Google Chrome T-Rex Auto Runner
//By Mikolaj Henzel, 2020
//Mention me if you want to use it
//GitHub: Henzelix
//Instagram: @mikolajhenzel

#include <Servo.h>  //Including library for micro servo
Servo servo;  //Creating object of the sevo library
int photoPin = A5;  //Signal port for photoresistor

void setup() {
  Serial.begin(9600);
  pinMode(photoPin, INPUT);   //Setting photoresistor as an output
  servo.attach(8);  //Pin which servo is connected to
  servo.write(76);  //Starting angle (if you want to use it on your own computer, you need to adjust it for yourself)
}

void loop() {
  int lightLevel = analogRead(photoPin);  //Getting photoresistor's current outcome
  Serial.println(lightLevel);   //Printing outcome in the serial monitor, which is necessary if you want to adjust it for yourself
  if(lightLevel < 30){  // if lightLevel is lesser than [minimal light value of your game's white background] do this...
    servo.write(37);  // Position servo at this angle (this angle could be a lot smaller, because servo on spacebar moves only a little, but I just left it as it is. If you want to use it on your own computer, you need to adjust it for yourself)
    delay(10);  //Delays every next action to give servo time to properly hit spacebar. You increase/reduce it if you need
  }
  else{   //If lightLevel is the same or greater than [minimal light value of your game's white background] do...
    servo.write(76);  //Stay at the starting position
  }
  delay(10);  //Pause between functions (every delay is in milliseconds)
}
