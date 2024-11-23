#include "Arduino.h"
#include "MyLibrary.h"

// Constructor
MyLibrary::MyLibrary(int led1Pin, int led2Pin, int buttonPin) {
  _led1Pin = led1Pin;     // กำหนดขา LED1
  _led2Pin = led2Pin;     // กำหนดขา LED2
  _buttonPin = buttonPin; // กำหนดขาปุ่ม
  _buttonState = LOW;     // สถานะเริ่มต้นของปุ่ม
}

// ตั้งค่าเริ่มต้น (เรียกใน setup())
void MyLibrary::begin() {
  pinMode(_led1Pin, OUTPUT);    // กำหนด LED1 เป็น OUTPUT
  pinMode(_led2Pin, OUTPUT);    // กำหนด LED2 เป็น OUTPUT
  pinMode(_buttonPin, INPUT);   // กำหนดปุ่มเป็น INPUT
  digitalWrite(_led1Pin, LOW);  // ปิด LED1 เริ่มต้น
  digitalWrite(_led2Pin, LOW);  // ปิด LED2 เริ่มต้น
}

// ควบคุม LED1 ตามสถานะปุ่ม
void MyLibrary::controlLED1() {
  _buttonState = digitalRead(_buttonPin); // อ่านสถานะปุ่ม
  if (_buttonState == HIGH) {
    digitalWrite(_led1Pin, HIGH);         // เปิด LED1
  } else {
    digitalWrite(_led1Pin, LOW);          // ปิด LED1
  }
}

// กระพริบ LED2 ด้วยความเร็วที่กำหนด
void MyLibrary::blinkLED2(int blinkRate) {
  digitalWrite(_led2Pin, HIGH); // เปิด LED2
  delay(blinkRate);             // หน่วงเวลา
  digitalWrite(_led2Pin, LOW);  // ปิด LED2
  delay(blinkRate);             // หน่วงเวลา
}
