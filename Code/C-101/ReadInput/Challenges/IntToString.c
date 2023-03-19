#include <stdio.h>
#include <stdlib.h>

int main()
{

     int number = 2007;
    char intStr[5 + sizeof(char)];
    sprintf(intStr, "%d", number);
    printf("%s\n", intStr);
   
    return 0;
}
