#include <iostream>
using namespace std;
int main()
{
    int **var = new *int[7];
    int tam = 7;
    for (int i=0; i < tam;i++){
        var[i] = new  int[3]
    }
    
    for (int i=0;i<tam;i++){
        for (int j=0; j< 3 ;j++){
            var[i][j] = i*2 + j
        }
    }
    
    for (int i=0;i<tam;i++){
        delete[] var[i];
    }
    delete[] var;
  return 0;
}
