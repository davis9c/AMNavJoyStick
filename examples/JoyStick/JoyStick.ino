#include "AMNavJoyStick.h"
AMNavJoyStick JStick1( A0, A1, 2);
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("X: ");
  Serial.print(JStick1.readX());
  Serial.print("\t");
  Serial.print("Y: ");
  Serial.print(JStick1.readY());
  Serial.print("\t");
  Serial.print("SW: ");
  Serial.println(JStick1.readSW());
}
