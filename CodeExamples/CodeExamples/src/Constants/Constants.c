//
//  Constants.c
//  C-101
//
//  Created by Vedavith Ravula on 06/03/23.
//

#include <stdio.h>

int constants(void);

int constants()
{
    const int length = 10;
    const int width = 1;
    const int height = 1;
    int area;
    area = length * width * height;
    printf("%d\n", area);
    return 0;
}
