void Calibrate() {
  for (int i = 0; i < 50; i++) {
    //Serial.print(" , ");
    if (i < 10) {
      drive(0, 0);
      //delay(1);
    }
    else if (i < 20) {
      drive(-80, 80);
      //delay(1);
    }
    else if (i < 40){
      drive(80, -80);
      //delay(1);
    }
    else{
      drive(-80, 80);
      //delay(1);
    }
    qtrrc.calibrate();
      }
  drive(0, 0);

  for (int i = 0; i < NUM_SENSORS; i++) {
    Serial.print(qtrrc.calibratedMinimumOn[i]);
    Serial.print(' ');
  }
  Serial.println();

  for (int i = 0; i < NUM_SENSORS; i++) {
    Serial.print(qtrrc.calibratedMaximumOn[i]);
    Serial.print(' ');
  }
  Serial.println();
  Serial.println();
}
