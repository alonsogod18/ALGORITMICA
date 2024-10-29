#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Ingrese numero para determinar su tabla de multiplicar: " << endl;
    cin>>num;
    for(int i=1; i<=10; i++){
      cout <<num <<"*" <<i <<"="
        <<num * i <<endl;
    }
    return 0;
}
