#include <stdio.h>

int main() {
    int key, answer1 = 5028, answer2 = 5030;
    printf("Enter your first key to unlock the padlock.(4 digits)");
    scanf("%d", &key);

    if ((key < 1000) && (key > 9999)) {
        printf("Invalid key. Please try again later.");
        return 0;
    }
    if (key != answer1) {
        printf("Unfortunately, your answer is wrong. Try again later.");
    }
    if ((key == answer1) || (key == answer2)) {
        printf("Good job! you have unlocked the locker!");
    }
    

}