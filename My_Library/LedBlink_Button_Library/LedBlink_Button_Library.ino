#include "MyLibrary.h"

// กำหนดขา LED และปุ่ม
MyLibrary myDevice(12, 13, 2); // LED1: ขา 12, LED2: ขา 13, ปุ่ม: ขา 2

void setup() {
  myDevice.begin(); // ตั้งค่าเริ่มต้น
}

void loop() {
  myDevice.controlLED1();  // ควบคุม LED1 ตามสถานะปุ่ม
  delay(50);
  myDevice.blinkLED2(500); // กระพริบ LED2 ด้วยความเร็ว 500 ms
}
