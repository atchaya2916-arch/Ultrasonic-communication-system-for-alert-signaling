#include <Wire.h>
#include <LiquidCrystal_I2C.h>

const int rxPin = A0;
const int buzzerPin = 8;

bool buzzerState = false;
unsigned long lastToggle = 0;

// LCD address usually 0x27 or 0x3F
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600);

  pinMode(buzzerPin, OUTPUT);
  digitalWrite(buzzerPin, LOW);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("RX System Ready");
  
  Serial.println("RX: Acoustic Buzzer Controller Ready");
}

bool pulse() {
  int sum = 0;
  
  for(int i = 0; i < 20; i++) {
    sum += analogRead(rxPin);
    delayMicroseconds(20);
  }

  return sum > 60;
}

void loop() {

  if(pulse() && millis() - lastToggle > 500) {

    buzzerState = !buzzerState;

    lcd.clear();
    lcd.setCursor(0,0);

    if(buzzerState) {
      digitalWrite(buzzerPin, HIGH);

      Serial.println("EMERGENCY");
      lcd.print("EMERGENCY!");
      lcd.setCursor(0,1);
      lcd.print("Buzzer ON");
    } 
    
    else {
      digitalWrite(buzzerPin, LOW);

      Serial.println("EVERYTHING FINE");
      lcd.print("EVERYTHING FINE");
      lcd.setCursor(0,1);
      lcd.print("Buzzer OFF");
    }

    lastToggle = millis();
  }

  delay(10);
}