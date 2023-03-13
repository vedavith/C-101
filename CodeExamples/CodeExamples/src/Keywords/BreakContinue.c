//
//  BreakContinue.c
//  CodeExamples
//
//  Created by Vedavith Ravula on 13/03/23.
//

#include <stdio.h>

int breakContinue(void);
int breakContinue() {
  int i,j;
  
  // Break - Example
  for (i = 0; i < 10; i++) {
    if (i == 4) {
      break;
    }
    printf("%d\n", i);
  }

 // Continue - Example
    for (j = 0; j < 10; j++) {
      if (j == 4) {
        continue;
      }
      printf("%d\n", j);
    }
   
  return 0;
}
