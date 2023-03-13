//
//  AutoBlockVisibility.c
//  CodeExamples
//
//  Created by Vedavith Ravula on 13/03/23.
//

#include <stdio.h>

int autoBlock(void);
int autoBlock()
{
    auto int number = 5;
    {
        auto int number = 20;
        printf("inner number: %d", number);
    }
    printf("\n");
    printf("outer number: %d", number);
    return 0;
}
