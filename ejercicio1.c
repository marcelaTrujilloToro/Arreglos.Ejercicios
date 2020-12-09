#include <stdio.h>

// llenar y mostrar un arreglo



void mostrar_elementos(int arreglo[]){
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n ", arreglo[i]);
    }
    
}

int main(){
  
    int numeros[4];

    numeros[0] = 14;
    numeros[1] = 7;
    numeros[2] = 74;
    numeros[3] = 2;
    mostrar_elementos(numeros);
    return 0;
}