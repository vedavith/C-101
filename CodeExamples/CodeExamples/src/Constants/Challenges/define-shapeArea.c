#include <stdio.h>

int defineShape(void);
int defineShape()
{
    const int side = 5;
    int area;
    area = side * side;
    printf("%d\n", area);
    return 0;
}

/*
 int main()
{
    const int length = 4;
    const int width = 5
    int area;
    area = length * width;
    printf("%d\n", area);
    return 0;
    
    
}
*/
