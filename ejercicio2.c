#include <stdio.h>

int mostrar_elementos(int *p, int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d \n", p[i]);
    }
    
}

int main(){
    int arreglo[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int size = sizeof(arreglo) / sizeof(int);
    mostrar_elementos(arreglo, size);
    return 0; 
}
