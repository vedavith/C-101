#include <stdio.h>

int main()
{
    int const pi = 3.14;
    int radius, diameter, area, circumference;
    printf("Welcome to Circle Calculator!");
    printf("");
    printf("%s", "What do you want your circle's radius to be?");
    scanf("%d", &radius);

    diameter = radius * 2;
    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("Your radius was %d so the area of your circle was %d.", radius, area);
    printf("");
    printf("Your diameter is %d, and your circumference is %d.", diameter, circumference);
}