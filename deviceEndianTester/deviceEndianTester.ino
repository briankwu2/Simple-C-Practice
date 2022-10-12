/* Author: Brian Wu
Code used to find out the endianness of a device.
If the string is printed in "normal" left-to-right order, then it is big endian.
If the string is printed "backwards" right-to-left order, then it is little endian.

Results show that the ESP32-VROOM-32E is Big Endian
Results also show that the Adafruit RP2040 Itsy Bitsy also is Big Endian.
*/


#define BAUD_RATE 115200

void setup()
{
    Serial.begin(BAUD_RATE);

}


void loop()
{
    char * strPtr = "hello";
    Serial.print("String = ");
    Serial.println(strPtr); // Prints out the string
    Serial.print("Address = ");
    Serial.println(String((int) strPtr, HEX)); // Writes the address of the pointer as a hexadecimal number
    
    for (int i = 0; i < sizeof("hello"); i++)
    {
        Serial.print("The address of this character is: ");
        Serial.print(String((int) (strPtr + i), HEX));
        Serial.print(" and the char at this location is: ");
        Serial.println(strPtr[i]);
    }
    delay(3000); // Delay for 3 seconds to read the results

}
