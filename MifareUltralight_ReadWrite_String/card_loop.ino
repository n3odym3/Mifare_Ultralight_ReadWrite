//Card loop===============================
void card_loop() {
  if ( ! mfrc522.PICC_IsNewCardPresent())
    return;
  if ( ! mfrc522.PICC_ReadCardSerial())
    return;

  if (Mode == 'R') {
    String data = ReadCard();
    Serial.print("New Tag : ");
    Serial.println(data);
    custom(data);
  }
  else if  (Mode == 'W')
    if(WriteCard()){
      Serial.println("OK");
    }
}
//Card loop===============================
