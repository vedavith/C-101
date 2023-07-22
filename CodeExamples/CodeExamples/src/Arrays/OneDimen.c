#include<stdio.h>

int main() {
    // sum of squares of n numbers

    int x[10], value, total, i;

    // reading array values
    printf("Enter 10 Numbers");
    for (i = 0; i < 10; i++) {
        scanf("%d", &value);
        x[i] = value;
    }

    // Calculating sum of squares
    total = 0;
    for (i = 0; i < 10; i++) { 
        total = (x[i] * x[i]) + total;
    }

    // print sum of squares
    for (i = 0; i < 10; i++) {
        printf("x[%d] = %d\n", i+1, x[i]); //x[1] = 1
    }
    printf("\nTotal : %d", total);
}

