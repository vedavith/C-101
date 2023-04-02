#include <stdio.h> 





int main()  {
    int JobNumber, level, conveyance = 0, entertainment = 0, basicPay = 0, grossSalary, houseRent, incomeTax, netSalary;
    printf("Welcome to the pay-bill calculator for Plant Employees! Please state your 4 digit Job Number on your welcome sheet:");
    scanf("%d", &JobNumber);

    if (JobNumber <= 9999)
 {
        printf("We have verified your Job number! You will now be entered into the Pay-Bill Calculator!");
    }
    else
    {
        printf("Intruder!");
        return 0;
    }

    printf("\n", "Welcome!");

    printf("Please enter your Level, ranging from 1-4!");
    scanf("%d",&level);

    switch(level)
    {
    case 1:
        conveyance = 1000;
        entertainment = 500;
    
    case 2:
    
        conveyance = 750;
        entertainment = 200;
    
    case 3:
    
        conveyance = 1000;
        entertainment = 500;
    
    
    case 4:
        conveyance = 250;
        entertainment = 0;
    }
    basicPay = conveyance + entertainment;
    houseRent = basicPay * 0.25;
    int perks = conveyance + entertainment;

    grossSalary = basicPay + houseRent + perks;

    if (grossSalary <= 2000)
    {
        incomeTax = 0;
    }
    
    else if (2000 < grossSalary <= 4000)
    {
        incomeTax = grossSalary * 0.03;
    }

    else if (4000 < grossSalary <= 5000)
    {
        incomeTax = grossSalary * 0.05;
    }

    else if (grossSalary > 5000)
    {
        incomeTax = grossSalary * 0.08;
    }

    netSalary = grossSalary - incomeTax;

    printf("Your gross salary is $");
    printf("%d\n", grossSalary);

    printf("Your income tax is $");
    printf("%d\n", incomeTax);

    printf("Your net salary is $");
    printf("%d\n", netSalary);



    
    
    
}



