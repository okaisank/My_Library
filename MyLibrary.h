#ifndef MyLibrary_h
#define MyLibrary_h

#include "Arduino.h"

class MyLibrary {
  public:
    MyLibrary(int led1Pin, int led2Pin, int buttonPin); // Constructor
    void begin();                                       // ตั้งค่าเริ่มต้น
    void controlLED1();                                 // ควบคุม LED1 ตามสถานะปุ่ม
    void blinkLED2(int blinkRate);                      // กระพริบ LED2 ด้วยความเร็วที่กำหนด

  private:
    int _led1Pin;                                       // ขา LED1
    int _led2Pin;                                       // ขา LED2
    int _buttonPin;                                     // ขาปุ่ม
    int _buttonState;                                   // สถานะปุ่ม
};

#endif
