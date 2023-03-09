#include <stdio.h>

int main()
{
    int side, squareArea;
    printf("%s","Enter side length here: ");
    scanf("%d",&side);
    squareArea = side * side;
    printf("Your Square Area of side %d is %d", side, squareArea);
}