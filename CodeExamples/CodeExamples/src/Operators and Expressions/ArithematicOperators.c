//
//  ArithematicOperators.c
//  CodeExamples
//
//  Created by Vedavith Ravula on 19/03/23.
//

#include <stdio.h>

int main()
{
    /* local variable definition */
   int a = 0;
   int b = 0;
   char op;

   printf("What operator would you like to use upon those two numbers?");
   scanf("%c", &op);         

   printf("Please tell me the first number:");
   scanf("%d", &a);

   printf("Please tell me your second number:");
   scanf("%d", &b);

       
   switch(op) {
      case '+' :
         printf("%d\n",a+b);
         break;
      case '-' :
         printf("%d\n",a-b);
         break;
      case '/' :
         printf("%d\n",a/b);
         break;
      case '*' :
         printf("%d\n",a*b);
         break;
      default :
         printf("Invalid operation\n" );
         break;
   }
   return 0;   
}

