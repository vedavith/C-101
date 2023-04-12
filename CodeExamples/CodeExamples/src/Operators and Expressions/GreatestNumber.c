//
//  GreatestNumber.c
//  CodeExamples
//
//  Created by Vedavith Ravula on 12/04/23.
//

#include <stdio.h>

int conditionalStatement(void);
int conditionalStatement(void) {
    int a,b,c,d;
    a = 10;
    b = 0;
    
    c = 20;
    d = 30;
    
    if (a > b) {
        printf("Yes");
    }
    
    //++c; // c++;
    
    if (c == 21 && d == 30) {
        printf("Yes");
    } else {
        printf("No");
    }
    
    return 1;
}
