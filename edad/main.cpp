#include <stdio.h>
#include <conio.h>


int main() {
    int diaN, mesN, anioN;
    int diaA, mesA, anioA;
    int edad;

    // Limpiar la pantalla (si conio.h está disponible)

    printf("Ingrese su fecha de nacimiento (dd mm aa): ");
    scanf("%d %d %d", &diaN, &mesN, &anioN);

    printf("Ingrese la fecha actual (dd mm aa): ");
    scanf("%d %d %d", &diaA, &mesA, &anioA);

    // Cálculo básico de la edad, sin considerar años bisiestos
    edad = anioA - anioN;

    // Ajustar la edad si aún no ha cumplido años este año
    if ((mesA < mesN) || ((mesA == mesN) && (diaA < diaN)))
        ;

    printf("\nTu edad es: %d años.", edad);

    getch(); // Pausar la ejecución hasta que se presione una tecla

    return 0;
}
