/*
  AnalogReadSerial
  - LED
    anode (long leg) attached to digital output 13
    cathode (short leg) attached to ground
  This example code is in the public domain.
  http://www.arduino.cc/en/Tutorial/AnalogReadSerial
*/
  const int pod1Led = 2;
  const int pod2Led = 3;
  const int pod3Led = 4;
  const int pod4Led = 5;


  const int pod1Button = 2;     // the number of the pushbutton pin
  const int pod2Button = 3;     // the number of the pushbutton pin
  const int pod3Button = 4;     // the number of the pushbutton pin
  const int pod4Button = 5;     // the number of the pushbutton pin
  

  // the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // initialize the pushbutton pin as an input:
  pinMode(pod1Button, INPUT);
  pinMode(pod2Button, INPUT);
  pinMode(pod3Button, INPUT);
  pinMode(pod4Button, INPUT);

  // initializing the LEDs
  pinMode(pod1Led, OUTPUT);
  pinMode(pod2Led, OUTPUT);
  pinMode(pod3Led, OUTPUT);
  pinMode(pod4Led, OUTPUT);
  

  // flash all lights once
  digitalWrite(pod1Led, HIGH);
  digitalWrite(pod2Led, HIGH);
  digitalWrite(pod3Led, HIGH);
  digitalWrite(pod4Led, HIGH);
  delay(1000);
  digitalWrite(pod1Led, 0);
  digitalWrite(pod2Led, 0);
  digitalWrite(pod3Led, 0);
  digitalWrite(pod4Led, 0);
}
// the loop routine runs over and over again forever:
void loop() {
    // podium1
    int pod1 = digitalRead(pod1Button);
    if (pod1 == HIGH) {
        // flash lights in the pod 1
        for (int i =0; i < 10; i++) {
            digitalWrite(pod1Led, HIGH);
            delay(250);
            digitalWrite(pod1Led, LOW);
            delay(500);
        }    
    }
// podium1
    int pod2 = digitalRead(pod2Button);
    if (pod2 == HIGH) {
        // flash lights in the pod 1
        for (int i =0; i < 10; i++) {
            digitalWrite(pod2Led, HIGH);
            delay(250);
            digitalWrite(pod2Led, LOW);
            delay(500);
        }    
    }
// podium1
    int pod3 = digitalRead(pod3Button);
    if (pod3 == HIGH) {
        // flash lights in the pod 1
        for (int i =0; i < 10; i++) {
            digitalWrite(pod3Led, HIGH);
            delay(250);
            digitalWrite(pod3Led, LOW);
            delay(500);
        }    
    }
    // podium4
    int pod4 = digitalRead(pod4Button);
    if (pod4 == HIGH) {
        // flash lights in the pod 1
        for (int i =0; i < 10; i++) {
            digitalWrite(pod4Led, HIGH);
            delay(250);
            digitalWrite(pod4Led, LOW);
            delay(500);
        }    
    }
    delay(10);
  }