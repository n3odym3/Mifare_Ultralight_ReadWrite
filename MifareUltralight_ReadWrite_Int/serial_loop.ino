//Serial Loop===================================
void serial_loop() {
  if (Serial.available()) {
    String input = Serial.readStringUntil('\n');
    Serial.read();
    Serial.print("Ready to write : ");
    Serial.println(input);
    Mode = 'W';
    input.getBytes(buffer, 100);
  }
}
//Serial Loop===================================
