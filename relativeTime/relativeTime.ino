/* Author: Brian Wu
To test the relative time that math operations may take on devices.
Is accurate up to the microsecond.
If results show up as "0" it may mean that the operation takes less than the current accuracy available
of the arduino.


*/

#include <time.h>
#define BAUD_RATE 115200 // Defines the Baud Rate


void setup()
{
	Serial.begin(BAUD_RATE);
    

}

void loop ()
{
    volatile int i = 5;
    volatile int j = 10;
    volatile float float_i = 1.5;
    volatile float float_j = 3.5;
    unsigned long timeStart = 0;
    unsigned long timeEnd = 0;
  

    // Tests relative time of integer +
    timeStart = micros();
    i + j;
    timeEnd = micros();
    Serial.print("The relative time for integer + is: ");
    Serial.print(timeEnd - timeStart);
    Serial.println(" microseconds");

    // Tests relative time of integer -
    timeStart = micros();
    i - j;
    timeEnd = micros();
    Serial.print("The relative time for integer - is: ");
    Serial.print(timeEnd - timeStart);
    Serial.println(" microseconds");

    // Tests relative time of integer *
    timeStart = micros();
    i * j;
    timeEnd = micros();
    Serial.print("The relative time for integer * is: ");
    Serial.print(timeEnd - timeStart);
    Serial.println(" microseconds");
    
    // Tests relative time of integer /
    timeStart = micros();
    i / j;
    timeEnd = micros();
    Serial.print("The relative time for integer / is: ");
    Serial.print(timeEnd - timeStart);
    Serial.println(" microseconds");
    
    // Tests relative time of integer %
    timeStart = micros();
    i % j;
    timeEnd = micros();
    Serial.print("The relative time for integer \% is: ");
    Serial.print(timeEnd - timeStart);
    Serial.println(" microseconds");

    // Tests relative time of float +
    timeStart = micros();
    float_i + float_j;
    timeEnd = micros();
    Serial.print("The relative time for float + is: ");
    Serial.print(timeEnd - timeStart);
    Serial.println(" microseconds");

    // Tests relative time of float -
    timeStart = micros();
    float_i - float_j;
    timeEnd = micros();
    Serial.print("The relative time for float - is: ");
    Serial.print(timeEnd - timeStart);
    Serial.println(" microseconds");

    // Tests relative time of float *
    timeStart = micros();
    float_i * float_j;
    timeEnd = micros();
    Serial.print("The relative time for float * is: ");
    Serial.print(timeEnd - timeStart);
    Serial.println(" microseconds");
    
    // Tests relative time of float /
    timeStart = micros();
    float_i / float_j;
    timeEnd = micros();
    Serial.print("The relative time for float / is: ");
    Serial.print(timeEnd - timeStart);
    Serial.println(" microseconds");
    Serial.println("---------------------------------------");


   delay(10000); // Demonstrate every 10 seconds
    
}
