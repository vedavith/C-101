#include <stdio.h>

int main() {
    int count, n;
    float x, y;
    printf("Enter the values of x and n :");
    scanf("%f %d", &x, &n);

    y = 1.0; // initialize
    count = 1;
    while (count <= n) { // Test
        y = y * x;
        count++;
    }
    
    printf("\nx = %f; n = %d; x^n = %f\n", x, n, y);
    return 0;
}