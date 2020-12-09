#include <stdio.h>

// leer por teclado un arreglo de 5 elementos numericos y una posicion entre (o y 4)
// eliminar el elemento situado en la posicion dada sin dejar huecos

void llenar_arreglo7(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("\nDigite un numero en la posicion: %d :", i);
        scanf("%d", &arr[i]);
    }    
}

int solicitar_posicion(int n){
    int posicion=0;
    do
    {
        printf("Digite la posicion que desea eliminar: ");
        scanf("%d", &posicion);
    } while (posicion <=0 && posicion >= n);    
    return posicion;
}

void eliminar_posicion(int arr[], int n, int posicion){
    for ( int i = posicion; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }    
}

void imprimir_arre(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
}

void imprimir_nuevo_arr7(int arr[], int n){
    llenar_arreglo7(arr, n);
    int posicion = solicitar_posicion(n);
    eliminar_posicion(arr, n, posicion);
    imprimir_arre(arr, n);

}
