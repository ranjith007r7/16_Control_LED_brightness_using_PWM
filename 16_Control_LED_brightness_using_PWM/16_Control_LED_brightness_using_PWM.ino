int ledPin = 3; //Assigning LED to Anolog Pin 0

void setup() {


pinMode(ledPin, OUTPUT);
analogWrite(ledPin, 0); // Setting ledPin to 0 -> OFF (PWM values vary from 0-255)
Serial.begin(9600);
 
}

void loop() {

  Serial.println("Brightness of the LED will increase from OFF condition to MAXIMUM");
  for (int i = 0; i<255; i++){
    analogWrite(ledPin, 1); // This loop will progressively increase the brightness of the LED
    delay(30);
  }
  
  Serial.println("MAXIMUM Brightness reached");
  delay(1000);
  Serial.println("Brightness of the LED will decrease from MAXIMUM to OFF condition");
  for (int i =254; i>=0; i--){
    analogWrite(ledPin, 1); // This loop will progressively decrease the brightness of the LED
    delay(30);

  }
  Serial.println("MINIMUM Brightness reached");
  delay(1000);

  delay(10);

}
