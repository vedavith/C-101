#include <stdio.h>

//driver
int main() {
    int begin;
    int end;

    printf("Enter a number to begin with: ");
    scanf("%d", &begin);
    printf("Enter a number to end : ");
    scanf("%d", &end);

    if (end < begin) {
        printf("end should be greater than begin");
        return 0;
    }

    while(begin <= end) {
        if (begin % 2 == 0) {
            printf("%d\n", begin);
        }
        begin++;
    }

    return 1;
}