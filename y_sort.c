#include <stdio.h>
#include <stdlib.h>

#include "rhombus.h"

int main() {

   mob_t m1 = InitMob(1, "Noel", 10, NULL, 0, 10, 1,1);
   mob_t m2 = InitMob(2, "Jasper", 10, NULL, 0, 1, 1,1);
   mob_t m3 = InitMob(3, "Midgar", 10, NULL, 0, 45, 1,1);
   
   mob_t mobs[] = { m1, m2, m3 };

   printf("Before sorting the list is: \n");
   for(int n = 0; n < 3; n++) {
      printf("%s\n", mobs[n].name);
   }
   
   int n = sizeof(mobs) / sizeof(mob_t);
   qsort(mobs, n, sizeof(mob_t), y_sort);
      
   printf("\nAfter sorting the list is: \n");
   for(int n = 0 ; n < 3; n++ ) {   
      printf("%s\n", mobs[n].name);
   }
  
   return(0);
}
