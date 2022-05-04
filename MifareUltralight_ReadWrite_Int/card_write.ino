//Card Write========================================================================================
bool WriteCard() {
  for (int i = 0; i < 12; i++) {
    status = (MFRC522::StatusCode) mfrc522.MIFARE_Ultralight_Write(pageAddr + i, &buffer[i * 4], 4);
  }
  if (status != MFRC522::STATUS_OK) {
    Serial.print("Writing Error : ");
    Serial.println(mfrc522.GetStatusCodeName(status));
    return false;
  }
  mfrc522.PICC_HaltA();
  Mode = 'R';
  return true;
}
//Card Write========================================================================================
