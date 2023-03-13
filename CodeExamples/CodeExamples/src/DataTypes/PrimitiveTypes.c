//
//  PrimitiveTypes.c
//  C-101
//
//  Created by Vedavith Ravula on 04/03/23.
//

// print an integer, float and a charecter
#include<stdio.h>

int primitiveDt(void);

int primitiveDt()
{
    int a  = 10; // Positive integer
    int b = -10; // Negitive integer
    int c = 10U; // Unsigned integer
    long int d = 99998L; // Long integer
    float e = 10.20f; // Float
    double f = 123123123.00; // Double
    double g = 12.293123; // Double
    double h = 2312312312.123123; // Double
    char i = 'a'; // Char
    char j = 99; // Char
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%ld\n", d);
    printf("%f\n", e);
    printf("%f\n", f);
    printf("%f\n", g);
    printf("%f\n", h);
    printf("%d\n", i);
    printf("%d\n", j);
    return 0;
}
