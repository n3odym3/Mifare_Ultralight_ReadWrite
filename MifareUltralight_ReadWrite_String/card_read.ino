//Card Read============================================================================================
String ReadCard() {
  size = sizeof(buffer);
  //Reading--------------------------------------------------------------------------------------------
  for (int i = 0; i < 3 ; i++) {
    status = (MFRC522::StatusCode) mfrc522.MIFARE_Read(pageAddr + i * 4 , &buffer[0 + i * 16], &size);
  }
  mfrc522.PICC_HaltA();
  if (status != MFRC522::STATUS_OK) {
    Serial.print("Reading error : ");
    Serial.println(mfrc522.GetStatusCodeName(status));
    return "ERROR";
  }
  //Reading--------------------------------------------------------------------------------------------

  //Output-----------------------
  String data = "";
  for (byte i = 0; i < 48; i++) {
    data += (char)buffer[i];
  }
  data = splitString(data, ' ', 0);
  Mode = 'R';
  return data;
  //Output-----------------------
}
//Card Read============================================================================================
