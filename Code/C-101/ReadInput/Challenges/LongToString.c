#include <stdio.h>
#include <stdlib.h>

int main()
{

    long longNumber = 64531235;
    char longStr[10 + sizeof(char)];
    sprintf(longStr, "%ld", longNumber);
    printf("%s\n", longStr);
   
    return 0;
}
