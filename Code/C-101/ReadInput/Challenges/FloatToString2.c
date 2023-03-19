#include <stdio.h>
#include <stdlib.h>

int main()
{

    float floatNumber = 1.234;
    char floatStr[10 + sizeof(char)];
    sprintf(floatStr, "%f", floatNumber);
    printf("%s\n", floatStr);
   
    return 0;
}
