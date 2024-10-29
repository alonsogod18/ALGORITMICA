#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Ingrese un numero del 1 al 5: "<<endl;
    cin>>num;
    switch(num){
    case 1:
    cout<<"El numero es uno" ; break;
case 2:
    cout<<"El numero es dos"; break;
case 3:
    cout<<"El numero es tres"; break;
case 4:
    cout<<"El numero es cuatro"; break;
case 5:
    cout<<"El numero es cinco"; break;
default:
    cout<<"Numero Invalido"; break;
    }
    return 0;
}
