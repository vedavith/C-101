//
//  PayBillCalculator.c
//  CodeExamples
//
//  Created by Vedavith Ravula on 31/03/23.
//

#include <stdio.h>

#define CA1 1000;
#define CA2 750;
#define CA3 500;
#define CA4 250;
#define EA1 500;
#define EA2 200;
#define EA3 100;
#define EA4 0;

// Driver
//int payBillCalculator(void);
int main()
{
    int level, jobnumber;
    float gross, basic, house_rent, perks, net, incometax;
    
    printf("\n Enter level, job number and basic pay\n");
    scanf("%d %d %f", &level, &jobnumber, &basic);
    
    if (level == 0) {
        printf("\ninvalid level\n");
        return 0;
    }
    
    switch(level) {
        case 1 :
            perks = CA1 + EA1;
            break;
        case 2 :
            perks = CA2 + EA2;
            break;
        case 3 :
            perks = CA3 + EA3;
            break;
        case 4 :
            perks = CA4 + EA4;
            break;
        default:
            perks = 0;
            break;
    }
    
    if (perks == 0) {
        printf("Perks cannot be Zero, Error caused by invalid level");
        return 0;
    }
    
    house_rent = 0.25 * basic;
    gross = basic + house_rent + perks;
    
    if (gross <= 2000) {
        incometax = 0;
    } else if (gross <= 4000) {
        incometax = 0.03 * gross;
    } else if (gross <= 5000) {
        incometax = 0.05 * gross;
    } else {
        incometax = 0.08 * gross;
    }
    
    net = gross - incometax;
    printf("%d %d %.2f\n", level, jobnumber, net);
    return 1;
}
