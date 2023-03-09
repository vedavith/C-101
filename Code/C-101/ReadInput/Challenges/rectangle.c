#include <stdio.h>

int main()
{
    int length;
    int width;
    int area;
    printf("%s", "Length value:");
    scanf("%d", &length);

    printf("%s", "Width value:");
    scanf("%d", &width);

    area = length * width;

    printf("Your length value was %d and your width value was %d and your area value is %d", length, width, area);
}