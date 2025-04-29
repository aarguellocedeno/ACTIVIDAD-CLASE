#include <iostream>
using namespace std;
int main()
{
    int var = 5;
    int *asocia = &var;
    cout << "esta es la variable  actual = " << *asocia <<endl;

    *asocia = 30;
    cout<< "el nuevo valor de la variable es = "<< *asocia<< endl;
    
    int& vari = var;
    cout << "\neste es el valor actual por referencia = " << vari <<endl;
    vari = 88;
    cout << "ahora es  = " << vari << endl;

    return 0;
}
