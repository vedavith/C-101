#include <stdio.h>
#include <stdlib.h>

int main()
{

    double doubleNumber = 1.2345678;
    char doubletStr[10 + sizeof(char)];
    sprintf(doubletStr, "%f", doubleNumber);
    printf("%s\n", doubletStr);
    
    return 0;
}
