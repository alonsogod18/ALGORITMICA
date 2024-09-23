#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre;
    int dia, mes, anio, anioActual = 2024; // Actualiza el a�o actual si es necesario

    cout << "Ingrese su nombre: ";
    getline(cin, nombre);

    cout << "Ingrese su fecha de nacimiento (dd mm aaaa): ";
    cin >> dia >> mes >> anio;

    // Validaci�n b�sica de la fecha
    if (anio > anioActual || mes < 1 || mes > 12 || dia < 1 || dia > 31) {
        cout << "Fecha de nacimiento inv�lida." << endl;
        return 1;
    }

    // C�lculo de la edad, considerando a�os bisiestos de forma aproximada
    int edad = anioActual - anio;
    if ((mes < 2 && anioActual % 4 == 0) || (mes == 2 && dia < 29 && anioActual % 4 == 0)) {
        edad--;
    }

    cout << "Hola, " << nombre << ". Tu edad  es: " << edad << " a�os." << endl;

    return 0;
}
