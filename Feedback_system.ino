
#include <Servo.h>;
Servo servo ;
int potpin = 0;  
int val; 

void setup(){
  
    Serial.begin(9600);
    pinMode(A0+0,INPUT);
    servo.attach(7); // init pin
}

void loop(){
    val = analogRead(potpin);   
    Serial.print(" potVal: ");
    Serial.print(val);
  val=map(val,0,1023,0,180);
    servo.write(val); // write to servo
    Serial.print(" angle: ");
    Serial.println(val);
  delay(1000);  
}
