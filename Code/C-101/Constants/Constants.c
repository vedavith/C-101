//
//  Constants.c
//  C-101
//
//  Created by Vedavith Ravula on 06/03/23.
//

#include <stdio.h>

int main()
{
    const int length = 10;
    const int width = 1;
    const int height = 1;
    int area;
    int lengthOverride = length;
    lengthOverride++;
    // length++; - cannot assign to variable 'length' with const-qualified type 'const int'
    
    area = lengthOverride * width * height;
    printf("%d\n", area);
    return 0;
    
    
}
