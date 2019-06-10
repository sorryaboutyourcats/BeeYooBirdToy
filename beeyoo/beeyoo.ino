#include <Servo.h> 

int servoPin = 3; 
int servoPin2 = 5; 
int ledPin = 13;

Servo Servo1; 
Servo Servo2;

char incomingByte;

void setup() { 
   Serial.begin(9600);
   pinMode(ledPin, OUTPUT);
   digitalWrite(ledPin, HIGH);
}

void loop(){ 

        // Troubleshooting
        if (Serial.available() > 0) {
                incomingByte = Serial.read();
                Serial.print("Key: ");
                Serial.println(incomingByte);
        }
        
        // Bell Slow
        if (incomingByte == 'q' || incomingByte == 'Q')
        {
          digitalWrite(ledPin, HIGH);
          Servo1.attach(servoPin); 
          Servo1.write(82); 
        }

        // Bell Med
        if (incomingByte == 'w' || incomingByte == 'W')
        {
          digitalWrite(ledPin, HIGH);
          Servo1.attach(servoPin); 
          Servo1.write(78); 
        }

        // Bell Fast
        if (incomingByte == 'e' || incomingByte == 'E')
        {
          digitalWrite(ledPin, HIGH);
          Servo1.attach(servoPin); 
          Servo1.write(70); 
        }

        // Bell Slow R
        if (incomingByte == 'r' || incomingByte == 'R')
        {
          digitalWrite(ledPin, HIGH);
          Servo1.attach(servoPin); 
          Servo1.write(99); 
        }

        // Bell Med R
        if (incomingByte == 't' || incomingByte == 'T')
        {
          digitalWrite(ledPin, HIGH);
          Servo1.attach(servoPin); 
          Servo1.write(107); 
        }

        // Bell Fast R
        if (incomingByte == 'y' || incomingByte == 'Y')
        {
          digitalWrite(ledPin, HIGH);
          Servo1.attach(servoPin); 
          Servo1.write(115); 
        }

        // Feeder Slow
        if (incomingByte == 'a' || incomingByte == 'A')
        {
          digitalWrite(ledPin, HIGH);
          Servo2.attach(servoPin2); 
          Servo2.write(82); 
        }

        // Feeder Med
        if (incomingByte == 's' || incomingByte == 'S')
        {
          digitalWrite(ledPin, HIGH);
          Servo2.attach(servoPin2); 
          Servo2.write(78); 
        }

        // Feeder Slow R
        if (incomingByte == 'd' || incomingByte == 'D')
        {
          digitalWrite(ledPin, HIGH);
          Servo2.attach(servoPin2); 
          Servo2.write(103); 
        }

        // Feeder Med R
        if (incomingByte == 'f' || incomingByte == 'F')
        {
          digitalWrite(ledPin, HIGH);
          Servo2.attach(servoPin2); 
          Servo2.write(107); 
        }

        // Stop all
        if (incomingByte == 'z' || incomingByte == 'Z')
        {
          digitalWrite(ledPin, LOW);
          Servo1.detach();
          Servo2.detach(); 
        }
          else
        {
        } 
}

/* Bell
 * Slow Q
 * Med W
 * Fast E
 * 
 * Bell - Reverse
 * Slow R
 * Med T
 * Fast Y
 * 
 * Feeder
 * Slow A
 * Med S
 * 
 * Feeder - Reverse
 * Slow D
 * Med F
 * 
 * Stop
 * Detach Z
 */
