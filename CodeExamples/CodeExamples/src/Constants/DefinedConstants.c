//
//  DefinedConstants.c
//  C-101
//
//  Created by Vedavith Ravula on 06/03/23.
//

#include <stdio.h>

#define LENGTH 10
#define WIDTH  5

int definedConst(void);
int definedConst()
{
   int area;
   area = LENGTH * WIDTH;
   printf("value of area : %d", area);
   return 0;
}

