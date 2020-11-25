#include <stdio.h>
#include <stdlib.h>

#include "rhombus.h"

int y_sort(const void *a, const void *b) {
   const mob_t *m1 = a;
   const mob_t *m2 = b;
   return m1->rect.y - m2->rect.y;
}

int main() {

   mob_t m1 = InitMob(1, "Noel", 10, NULL, 0, 10, 1,1);
   mob_t m2 = InitMob(2, "Jasper", 10, NULL, 0, 1, 1,1);
   mob_t m3 = InitMob(3, "Midgar", 10, NULL, 0, 45, 1,1);
   
   mob_t values[] = { m1, m2, m3 };

   printf("Before sorting the list is: \n");
   for(int n = 0; n < 3; n++) {
      printf("%s\n", values[n].name);
   }
   
   int n = sizeof(values) / sizeof(mob_t);
   qsort(values, n, sizeof(mob_t), y_sort);

   printf("\nAfter sorting the list is: \n");
   for(int n = 0 ; n < 3; n++ ) {   
      printf("%s\n", values[n].name);
   }
  
   return(0);
}
