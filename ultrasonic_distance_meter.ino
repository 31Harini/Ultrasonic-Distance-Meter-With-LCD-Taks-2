#include <LiquidCrystal.h>

// LCD pins: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#define TRIG_PIN 9
#define ECHO_PIN 10

void setup()
{
  lcd.begin(16, 2);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  Serial.begin(9600);

  lcd.setCursor(0, 0);
  lcd.print("Distance Meter");
  delay(2000);

  lcd.clear();
}

void loop()
{
  long duration;
  float distance;

  // Trigger ultrasonic pulse
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(TRIG_PIN, LOW);

  // Read echo time
  duration = pulseIn(ECHO_PIN, HIGH);

  // Calculate distance in cm
  distance = duration * 0.0343 / 2;

  // Display on LCD
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Distance:");

  lcd.setCursor(0, 1);
  lcd.print(distance, 1);  // 1 decimal place
  lcd.print(" cm");

  // Display in Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance, 1);
  Serial.println(" cm");

  delay(500);
}