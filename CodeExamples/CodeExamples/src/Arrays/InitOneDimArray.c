#include<stdio.h>

// driver
int main() {
    // compile time initialization - int array-name[size] = {list of values};
    int number[4] = {1, 2, 3, 4};

    // run time initialization - We initialize the array at the run time
    int numbers[5];
    for (int j = 0; j < 5; j++) {
        numbers[j] = j+1;
    }

    //int number[] = {1, 2}; //
    // Printing the array values
    int size = sizeof(numbers)/sizeof(numbers[0]);
    for (int i = 0; i < size; i++) {
        printf("number[%d] = %d\n", i, numbers[i]);
    }
}