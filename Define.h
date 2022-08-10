#define Kp 0.06
#define Kd 0.1
#define rightMaxSpeed  200
#define leftMaxSpeed   200
#define rightBaseSpeed 100
#define leftBaseSpeed  100
#define NUM_SENSORS      8
#define TIMEOUT       2500
int error = 0;

//int colour = 0;
Button button(53);
int wb;
#define R 43
#define G 44
#define B 45

#define PWM0A   10
#define PWM0B   11
#define DIRA    23
#define DIRB    22

int lastError = 0;

QTRSensorsRC qtrrc((unsigned char[]) {
2, 3, 4, 5, 6, 7, 8, 9
} , NUM_SENSORS, TIMEOUT, QTR_NO_EMITTER_PIN);
unsigned int sensorValues[NUM_SENSORS];
