//
//  Input.c
//  C-101
//
//  Created by Vedavith Ravula on 09/03/23.
//

#include <stdio.h>
int readData(void);

int readData()
{
    int testInteger;
    printf("Enter an integer: ");
    scanf("%d", &testInteger);
    printf("Number = %d",testInteger);
    return 0;
}

