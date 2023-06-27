#include <stdio.h>

int main()
{
    // Exit Controlled loop - body is excecuted atleast once.
    int i = 1, sum = 0; // initialize
    do 
    {
        // increment
        sum = sum + i;
        i = i + 2; 
    } while(sum < 40 || i < 10); // test
    printf("i: %d sum: %d", i, sum);
    return 0;
}