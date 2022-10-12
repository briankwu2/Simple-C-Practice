#define BAUD_RATE 115200


void setup()
{
    Serial.begin(BAUD_RATE);

}


void loop()
{
    char * strPtr = "hello";
    Serial.print("String = ");
    Serial.print(strPtr); // Find out if the address or string is printed out
    
    for (int i = 0; i < sizeof("hello"); i++)
    {
        Serial.println(strPtr[i]);
    }

}
