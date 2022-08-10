
#include <QTRSensors.h>
#include <Button.h>
#include "Define.h"

void setup() {
  Serial.begin(9600);
  button.begin();
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(PWM0A, OUTPUT);
  pinMode(PWM0B, OUTPUT);
  pinMode(DIRA, OUTPUT);
  pinMode(DIRB, OUTPUT);

  Calibrate();

}

void loop() {
  unsigned int sensors[8];
  int position = qtrrc.readLine(sensors);
  if (sensors[0] > 600 && sensors[7] > 600){
    wb = 1;
    // Serial.println("Black");
  }
  else if (sensors[0] < 600 && sensors[7] < 600){
    wb = 0;
    // Serial.println("White");
  }

  PID();
}
