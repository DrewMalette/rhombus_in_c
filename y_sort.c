#include <stdio.h>
#include <stdlib.h>

#include "rhombus.h"

//int values[] = { 88, 56, 100, 2, 25 };

int cmpfunc (const void *a, const void *b) {
   const Camera *c1 = a;
   const Camera *c2 = b;
   return c1->rect.y - c2->rect.y;
   //return ( *(struct Camera)a.rect.y - *(struct Camera)b.rect.y );
   //return ( (int*)a.rect.y - (int*)b.rect.y );
}

int main () {

   Camera c1 = InitCamera("c1", 0, 10, 1,1);
   Camera c2 = InitCamera("c2", 0, 1, 1,1);
   Camera c3 = InitCamera("c3", 0, 45, 1,1);
   Camera c4 = InitCamera("c4", 0, 200, 1,1);
   Camera c5 = InitCamera("c5", 0, 5, 1,1);

   Camera values[] = { c1, c2, c3, c4, c5 };

   printf("Before sorting the list is: \n");
   for(int n = 0; n < 5; n++) {
      printf("%d ", values[n].rect.y);
   }
   
   int n = sizeof(values) / sizeof(Camera);
   qsort(values, n, sizeof(Camera), cmpfunc);

   printf("\nAfter sorting the list is: \n");
   for(int n = 0 ; n < 5; n++ ) {   
      printf("%d ", values[n].rect.y);
   }
  
   return(0);
}
