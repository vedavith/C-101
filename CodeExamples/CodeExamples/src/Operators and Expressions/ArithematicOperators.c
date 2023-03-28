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

    printf("Please tell me the first number:");
   // scanf("%d", &a);

    printf("Please tell me your second number:");
   // scanf("%d", &b);

    printf("What operator would you like to use upon those two numbers?");
   // scanf("%s", &op);
   scanf("%d %d %s",&a,&b,&op);
         
         printf("%d\n",a);
         printf("%d\n",b);
    switch(op) {
      case '+' :
         printf("%d",a);
         printf("%d",b);
         printf("%d\n",a+b);
          break;
      case '-' :
         printf("%d",a);
         printf("%d",b);
         printf("%d\n",a-b);
          break;
      case '/' :
         printf("%d",a);
         printf("%d",b);
         printf("%d\n",a/b);
          break;
      case '*' :
         printf("%d",a);
         printf("%d",b);
         printf("%d\n",a*b);
          break;
       default :
          printf("Invalid operation\n" );
          break;
    }
        
}

