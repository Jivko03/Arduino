const int sensorPin = 2;
const int red = 10;
const int yellow = 9;
const int green = 8;
int light = 0;


void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);  // Set sensorPin as input
  Serial.begin(9600);         // Start serial communication at 9600 baud rate
}

void loop() {
  int joe = digitalRead(sensorPin); 
  Serial.println(digitalRead(sensorPin));  // Read the digital value from the sensor and print it to the serial monitor
  delay(50);
  if(joe == 1)
  {
    light++;
    if(light == 3)
    {
      light = 0;
    }
  }
  if(light == 0)
  {
    digitalWrite(red, HIGH);
    digitalWrite(yellow,LOW);
    digitalWrite(green, LOW);
    delay(30000);
    digitalWrite(red, LOW);
    digitalWrite(yellow,HIGH);
    digitalWrite(green, LOW);
    delay(30000);
    digitalWrite(red, LOW);
    digitalWrite(yellow,LOW);
    digitalWrite(green, HIGH);
    delay(30000);
  }
  if(light == 0){
    digitalWrite(red, HIGH);
    digitalWrite(yellow,LOW);
    digitalWrite(green, LOW);
  }
  if(light == 1)
  {
    digitalWrite(red, LOW);
    digitalWrite(yellow,HIGH);
    digitalWrite(green, LOW);
  }
  if(light == 2)
  {
    digitalWrite(red, LOW);
    digitalWrite(yellow,LOW);
    digitalWrite(green, HIGH);
  }
}
