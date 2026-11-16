#include "pitches.h"
int ledpin1 = 2;
int ledpin2 = 3;
int ledpin3 = 4;
int ledpin4 = 5;
int button1 = 10;
int button2 = 11;
int button3 = 12;
int button4 = 13;
int buzzerPin = 8;
char ledarr[11];
int melody[] = {NOTE_C5, NOTE_D5, NOTE_E5};
int duration = 200;  // 500 miliseconds
int game = 0;
void setup() {
  Serial.begin(9600);
  ledarr[10] = 0;
  pinMode(ledpin1, OUTPUT);
  pinMode(ledpin2, OUTPUT);
  pinMode(ledpin3, OUTPUT);
  pinMode(ledpin4, OUTPUT);
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(button4, INPUT_PULLUP);
  randomSeed(analogRead(A0));

  if (game == 0){
  for (int i = 0; i < 10; i++)
  {
    int randomnumber = random(1, 5);
    switch(randomnumber)
 
    {
      case 1:
       digitalWrite(ledpin1, HIGH);
       ledarr[i] = 1;
       delay(1000);
       digitalWrite(ledpin1, LOW);
       delay(250);
       break;
      case 2:
       digitalWrite(ledpin2, HIGH);
       ledarr[i] = 2;
       delay(1000);
       digitalWrite(ledpin2, LOW);
       delay(250);
       break;
      case 3:
       digitalWrite(ledpin3, HIGH);
       ledarr[i] = 3;
       delay(1000);
       digitalWrite(ledpin3, LOW);
       delay(250);
       break;
      case 4:
       digitalWrite(ledpin4, HIGH);
       ledarr[i] = 4;
       delay(1000);
       digitalWrite(ledpin4, LOW);
       delay(250);
       break;

    }
  }
 }
}

int j = 0;
void loop() {
if (game == 0){
  if (digitalRead(button1) == LOW && ledarr[j] == 1) 
  {
    j++;
    delay(200);
    Serial.println("Correct");
    tone(buzzerPin, 3000, 200);
    delay(200);
  }
  else if (digitalRead(button1) == LOW && ledarr[j] != 1)
  {
  tone(buzzerPin, 1000);  
  delay(200);
  noTone(buzzerPin);    
  delay(200);
  game = 1;
  }

  if (digitalRead(button2) == LOW && ledarr[j] == 2) 
  {
    j++;
    delay(200);
    Serial.println("Correct");
    tone(buzzerPin, 3000, 200);
    delay(200);
  }
  else if (digitalRead(button2) == LOW && ledarr[j] != 2)
  {
  tone(buzzerPin, 1000);  
  delay(200);
  noTone(buzzerPin);     
  delay(200);
  game = 1;
  }

  if (digitalRead(button3) == LOW && ledarr[j] == 3) 
  {
    j++;
    delay(200);
    Serial.println("Correct");
    tone(buzzerPin, 3000, 200);
    delay(200);
  }
  else if (digitalRead(button3) == LOW && ledarr[j] != 3)
  {
  tone(buzzerPin, 1000);  
  delay(200);
  noTone(buzzerPin);     
  delay(200);
  game = 1;
  }

  if (digitalRead(button4) == LOW && ledarr[j] == 4) 
  {
    j++;
    delay(200);
    Serial.println("Correct");
    tone(buzzerPin, 3000, 200);
    delay(200);
  }
  else if (digitalRead(button4) == LOW && ledarr[j] != 4)
  {
  tone(buzzerPin, 1000);  
  delay(200);
  noTone(buzzerPin);      
  delay(200);
  game = 1;
  }
  if (ledarr[j] == 0){
    int melodySize = sizeof(melody) / sizeof(melody[0]);
  
    for (int thisNote = 0; thisNote < melodySize; thisNote++) {
    
      tone(8, melody[thisNote], duration);
      delay(duration);
      game = 1;
      
  }
    
  }
 }
}
