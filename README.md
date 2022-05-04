# Mifare_Ultralight_ReadWrite
Simple code to read and write to Mifare Ultralight RFID tag

## Dependencies 

[MFRC522](https://github.com/miguelbalboa/rfid)

## GPIO

|Microcontroller|CLK|MISO|MOSI|SDA|RST|
|---------------|---|----|----|---|--|
| ESP32 | GPIO14 | GPIO12 | GPIO13 | GPIO15 | GPIO05 |
| ESP8266 | GPIO18 | GPIO19 | GPIO23 | GPIO15 | GPIO05 |

## How to use ?

### Write 

* Connect the reader to you computer
* Open the serial com (baud rate : 115200)
* Type the data (String or Int) to write (**MAXIMUM 48bytes**)
* Touch the reader with your RFID tag
* DONE :D

### Read

* Connect the reader to you computer
* Open the serial com (baud rate : 115200)
* Touch the reader with your RFID tag
* DONE :D

### Custom code

* Edit the function **custom()**
