#include <stdio.h>
// Write a program to evaluate the equation y=x^n, where n is a non-negitive integer.
int main() {  
    long long x, y = 1, n, count = 1;
    printf("Please give a number:");
    scanf("%lld", &x);

    printf("Please give another number:");
    scanf("%lld", &n);
    
    while(count <= n) {
        y = x * y;
        count++;
    }

    printf("%lld", y);


   


}