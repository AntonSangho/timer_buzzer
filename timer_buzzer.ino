const int ledPin = 6;
int buzzer = 11;
//const int switchPin = 7;

void setup(){
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  //pinMode(switchPin, INPUT);
}

void loop(){
  if (Serial.available()) {
    int userInput = Serial.parseInt();
    while (userInput > 0){
      //Serial.print(userInput);
      digitalWrite(ledPin, HIGH);
      delay(250);
      digitalWrite(ledPin, LOW);
      delay(250);
      userInput = userInput - 1;
    }
    if (userInput == 0){
      tone(buzzer, 500, 1000);
    }
  }
  else 
  {
    digitalWrite(ledPin, LOW);
  }
}