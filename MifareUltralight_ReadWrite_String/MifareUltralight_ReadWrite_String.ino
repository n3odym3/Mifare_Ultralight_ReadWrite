//RFID LIB========================
#include <SPI.h>
#include <MFRC522.h>
//ESP6266 : CLK=14/MISO=12/MOSI=13
//ESP32 : CLK=18/MISO=19/MOSI=23
#define SDA 15 //CS
#define RST 05
MFRC522 mfrc522(SDA, RST);
MFRC522::StatusCode status;
//RFID LIB========================

//RFID var===================
char Mode = 'R';
byte buffer[100];
byte size = sizeof(buffer);
uint8_t pageAddr = 4;
//RFID var===================

//SETUP=================
void setup() {
  //Serial-------------
  Serial.begin(115200);
  Serial.println();
  //Serial-------------

  //RFID-------------
  SPI.begin();
  mfrc522.PCD_Init();
  //RFID-------------
}
//SETUP=================

//LOOP===========
void loop() {
  serial_loop();
  card_loop();
}
//LOOP===========
