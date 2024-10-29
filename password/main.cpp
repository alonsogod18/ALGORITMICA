#include<iostream>

using namespace std;

int main()
{
    int num, password = 123;
    do {
        cout << "Ingrese la contrasena (password): ";
        cin >> num;
        if (num != password) {
            cout << "Clave incorrecta" << endl;
        }
    } while (num != password);

    cout << "Clave correcta" << endl;
    return 0;
}
