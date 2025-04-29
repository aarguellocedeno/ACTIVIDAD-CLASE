#include <iostream>
using namespace std;
int main()
{
    int var[] = {1,2,3,4,5,7,9};
    int tam = 7;
    cout<< tam<<endl;
    int *copia = var;
    for (int i = 0; i  < tam; i++){
        cout << "elemento actual= "<< *(copia+i) <<endl;
        *(copia+i) *= 2;
        cout << "elemento modificado = "<< *(copia+i)<< "\n\n";
    } 
    cout<< "direccion de memoria del array =>  "<<&var<< endl;
    cout << "direccion de memoria del puntero =>  "<<&copia<<endl;
    return 0;
}
