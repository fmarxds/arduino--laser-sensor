#include <Arduino.h>

#define LDR A0

void setup() {
    Serial.begin(9600);
    pinMode(LDR, INPUT);
}

void printLdrData(int ldrValue) {
    double tension = ldrValue * 5.0 / 1024.0;

    Serial.print("LDR: ");
    Serial.print(ldrValue);
    Serial.print("\t");

    Serial.print("TENSION: ");
    Serial.print(tension);
    Serial.print("V");

    Serial.println();
}

void loop() {
    int ldrValue = analogRead(LDR);

    printLdrData(ldrValue);

    delay(10);
}