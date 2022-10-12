#include <time.h>
#define BAUD_RATE 115200 // Defines the Baud Rate


void setup()
{
	Serial.begin(BAUD_RATE);
    

}

void loop ()
{
    int i = 5;
    int j = 10;
    float float_i = 1.5;
    float float_j = 3.5;
    unsigned long timeStart = 0;
    unsigned long timeEnd = 0;

    // Tests relative time of integer +
    timeStart = micros();
    i + j;
    timeEnd = micros();
    Serial.println("The relative time for integer + is: ");
    Serial.println(timeEnd - timeStart);

    // Tests relative time of integer -
    timeStart = micros();
    i - j;
    timeEnd = micros();
    Serial.println("The relative time for integer - is: ");
    Serial.println(timeEnd - timeStart);

    // Tests relative time of integer *
    timeStart = micros();
    i * j;
    timeEnd = micros();
    Serial.println("The relative time for integer * is: ");
    Serial.println(timeEnd - timeStart);

    // Tests relative time of integer /
    timeStart = micros();
    i / j;
    timeEnd = micros();
    Serial.println("The relative time for integer / is: ");
    Serial.println(timeEnd - timeStart);

    // Tests relative time of integer %
    timeStart = micros();
    i % j;
    timeEnd = micros();
    Serial.println("The relative time for integer \% is: ");
    Serial.println(timeEnd - timeStart);

    // Tests relative time of float +
    timeStart = micros();
    float_i + float_j;
    timeEnd = micros();
    Serial.println("The relative time for float + is: ");
    Serial.println(timeEnd - timeStart);

    // Tests relative time of float -
    timeStart = micros();
    float_i - float_j;
    timeEnd = micros();
    Serial.println("The relative time for float - is: ");
    Serial.println(timeEnd - timeStart);

    // Tests relative time of float *
    timeStart = micros();
    float_i * float_j;
    timeEnd = micros();
    Serial.println("The relative time for float * is: ");
    Serial.println(timeEnd - timeStart);

    // Tests relative time of float /
    timeStart = micros();
    float_i / float_j;
    timeEnd = micros();
    Serial.println("The relative time for float / is: ");
    Serial.println(timeEnd - timeStart);

    
}
