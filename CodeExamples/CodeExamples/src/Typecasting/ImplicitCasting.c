//
//  ImplicitCasting.c
//  CodeExamples
//
//  Created by Vedavith Ravula on 14/03/23.
//

#include <stdio.h>
#include <stdlib.h>

int implicitCastingExample(void);

//int main()
int implicitCastingExample()
{
    // Explicit type casting
    int a,b;
    a = 15; b=2;
    double div;
    div = (double)a/b;
    
    // Converting float to string
    float x = atof("10");
    printf("%f\n", x);
   
    // converting a long to string
    long y = atol("1012342435");
    printf("%ld\n", y);
    
    // Converting string to int
    int z = atoi("1096");
    printf("%d\n", z);
    
    //sprintf(stringVariable, FormatSpecifier, Number); Number can be an int, long, float, double
    
    // Converting int to string
    int number = 1243;
    char intStr[10 + sizeof(char)];
    sprintf(intStr, "%d", number);
    printf("%s\n", intStr);
    
    // Converting long to string
    long longNumber = 12345678;
    char longStr[10 + sizeof(char)];
    sprintf(longStr, "%ld", longNumber);
    printf("%s\n", longStr);
    
    // Converting float to string
    float floatNumber = 1.234;
    char floatStr[10 + sizeof(char)];
    sprintf(floatStr, "%f", floatNumber);
    printf("%s\n", floatStr);
    
    // Converting double to string
    double doubleNumber = 1.2345678;
    char doubletStr[10 + sizeof(char)];
    sprintf(doubletStr, "%f", doubleNumber);
    printf("%s\n", doubletStr);
    
    return 0;
}
