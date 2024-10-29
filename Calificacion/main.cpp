#include <conio.h>
#include<stdio.h>


int main()

{
float cal1, cal2, cal3, prom;

 printf("Dame tu calificacion del parcial 1: ", &cal1);
 scanf("%f", &cal1);
  printf("Dame tu calificacion del parcial 2: ", &cal2);
  scanf("%f", &cal2);
   printf("Dame tu calificacion del parcial 3: ", &cal3);
   scanf("%f", &cal3);

   prom=(cal1+cal2+cal3)/3;

   if (prom>=6){
       printf("Tu calificacion es: %.2f\n", prom);
    printf("Aprobado ");
   }else{
       printf("Tu calificacion es: %.2f\n", prom);
       printf("Reprobado ");
   }
   getch();
}
