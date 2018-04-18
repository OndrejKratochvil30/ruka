#include <LearningKit.h>

void setup() {
  Serial.begin(115200);
  Serial1.begin(115200);


}

void loop() {
  // put your main code here, to run repeatedly:
 /* if (connected != Serial2.hasClient()) {
    if (SerialBT.hasClient() == true) {
      connected = true;
      lcd.setCursor(0, 3);
      lcd.print("                    ");
      lcd.print("Conected     ");
    } else {
      connected = false;
      lcd.setCursor(0, 3);
      lcd.print("                    ");
      lcd.print("Disconected");
    }*/
  }
  if (Serial.available()) {
    Serial.write(Serial1.read());

  }
