#include <stdio.h>

int main () {
  int v1;
  int v2;
  int max;
  printf ("FIRST NUMBER:");
  scanf ("%d", &v1);
  printf("SECOND NUMBER:");
  scanf("%d", &v2);
  if (v1 > v2) {
    max = v1;
  }
    else if (v2 > v1){
    max = v2;
  }
    else {
    printf( "THEY ARE THE SAME,PLEASE ENTER THE NUMBERS AGAIN");
    }do{
     printf ("FIRST NUMBER:");
     scanf ("%d", &v1);
     printf("SECOND NUMBER:");
     scanf("%d", &v2);
     if (v1 = v2)
     {
       printf( "GIVE THEM AGAIN,YOU CHEATED");
     }
       else if (v1 > v2)
     {
        max = v1;
     }
       else {
        max = v2;
     }
    }while (v1==v2);
   printf("YOU GAVE ME THE RIGHT NUMBERS.HERE IS THE BIGGEST ONE: %d\n" , max);
   return 0;
}
