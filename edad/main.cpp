#include <stdio.h>
#include <conio.h>


int main() {
    int diaN, mesN, anioN;
    int diaA, mesA, anioA;
    int edad;

    // Limpiar la pantalla (si conio.h est� disponible)

    printf("Ingrese su fecha de nacimiento (dd mm aa): ");
    scanf("%d %d %d", &diaN, &mesN, &anioN);

    printf("Ingrese la fecha actual (dd mm aa): ");
    scanf("%d %d %d", &diaA, &mesA, &anioA);

    // C�lculo b�sico de la edad, sin considerar a�os bisiestos
    edad = anioA - anioN;

    // Ajustar la edad si a�n no ha cumplido a�os este a�o
    if ((mesA < mesN) || ((mesA == mesN) && (diaA < diaN)))
        ;

    printf("\nTu edad es: %d a�os.", edad);

    getch(); // Pausar la ejecuci�n hasta que se presione una tecla

    return 0;
}
