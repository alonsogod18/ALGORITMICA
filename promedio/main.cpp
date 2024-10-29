#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
float tot=0;
float p1;
float p2;
float p3;

int main()
{
    printf("Calificacion primer parcial:");
    scanf ("%d", p1);
    printf("Calificacion segundo parcial:");
    scanf("%d", p2);
    printf("Calificacion del tercer parcial");
    scanf("%d", p3);
    tot=(p1+p2+p3)/2;
    printf("Tu promedio es:", tot);

    if(tot>=7){

        printf("/n /n /n Aprobado");

    }
    else{
        printf("/n /n /n Reprobado");
    }
    return 0;
}
