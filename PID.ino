/*void PID() {
  unsigned int sensors[8];
  int position = qtrrc.readLine(sensors,QTR_EMITTERS_ON,1);
  error = position - 3500;

 int motorSpeed = Kp * error + Kd * (error - lastError);
  lastError = error;
  int rightMotorSpeed;
  int leftMotorSpeed;
  if (colour==0){
  rightMotorSpeed = rightBaseSpeed - motorSpeed;
    leftMotorSpeed = leftBaseSpeed + motorSpeed;
  }
  if (colour==1){
   rightMotorSpeed = rightBaseSpeed + motorSpeed;
    leftMotorSpeed = leftBaseSpeed - motorSpeed;
  }
 */
 /*  int rightMotorSpeed = rightBaseSpeed - motorSpeed;
   int  leftMotorSpeed = leftBaseSpeed + motorSpeed;
  rightMotorSpeed = constrain(rightMotorSpeed, -rightMaxSpeed, rightMaxSpeed);
  leftMotorSpeed = constrain(leftMotorSpeed, -leftMaxSpeed, leftMaxSpeed);

  drive(leftMotorSpeed, rightMotorSpeed);

}*/
void PID() {
/*  if (colour==0){
  unsigned int sensors[8];
  int position = qtrrc.readLine(sensors,QTR_EMITTERS_ON,0);
  int error = position - 3500;
  }
  if (colour == 1){
     unsigned int sensors[8];
  int position = qtrrc.readLine(sensors,QTR_EMITTERS_ON,1);
  int error = position - 3500;
  }
  */
  unsigned int sensors[8];
  int position = qtrrc.readLine(sensors,QTR_EMITTERS_ON,wb);
  int error = position - 3500;
  int motorSpeed = Kp * error + Kd * (error - lastError);
  lastError = error;

  int rightMotorSpeed = rightBaseSpeed - motorSpeed;
  int leftMotorSpeed = leftBaseSpeed + motorSpeed;

  rightMotorSpeed = constrain(rightMotorSpeed, -rightMaxSpeed, rightMaxSpeed);
  leftMotorSpeed = constrain(leftMotorSpeed, -leftMaxSpeed, leftMaxSpeed);

 
    drive(leftMotorSpeed, rightMotorSpeed);

 
}
