int main(int argc, char const *argv[])
{

    char * str;

    str = (char *) malloc(6);
    strcpy(str, "hello");
    printf("String = %s, Address = %u\n", str, str); // Outputs the current address and string

    for (int i = 0; i < 4; i++)
    {
        
    }



    return 0;
}
