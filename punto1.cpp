// punto 1

#include <iostream>
using namespace std;
int main(){
    int var = 20;
    cout << "esta es la direccion de memoria de la variable = " << &var <<endl;
    
    int *puntero = &var;
    *puntero = 30;   
    cout<< "el valor de la variable es = "<< var << "  |  la direccion de memoria de la variable es"<< &var;

    return 0;
}
