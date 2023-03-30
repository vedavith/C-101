//
//  ModlusOperator.c
//  CodeExamples
//
//  Created by Vedavith Ravula on 29/03/23.
//

#include <stdio.h>

// driver code
int modOp(void);
int modOp()
{
    int a = 0, b = 0;
    printf("a:");
    scanf("%d", &a);
    printf("b:");
    scanf("%d", &b);
    int c = a%b;
    printf("mod op: %d\n", c);
    return 0;
}
