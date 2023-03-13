//
//  IfCondition.c
//  CodeExamples
//
//  Created by Vedavith Ravula on 13/03/23.
//

#include <stdio.h>

int ifElse(void);
int ifElse()
{
    auto int x = 0,y = 10;
    if (x > 10) {
        printf("X is Greater");
    } else if(y > 10) {
        printf("Y is Greater");
    } else {
        printf("None are Greater");
    }
    return 0;
}
