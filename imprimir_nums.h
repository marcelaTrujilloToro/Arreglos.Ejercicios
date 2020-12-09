#include <stdio.h>

// leer 8 nums enteros dentro de un arreglo. y se deben mostrar en el siguiente orden:
// el primero, el ultimo, el segundo, el penultimo, el tercero....

void llenar_arreglo6(int arr[], int n){
    
    for (int i = 0; i < n; i++)
    {
        printf("\n Digite un numero:");
        scanf("%d", &arr[i]);
    }    
}

void imprimir_numeros(int arr[], int n){
    llenar_arreglo6(arr, n);
    int vueltas = 3;
    for (int i = 0; i < vueltas; i++)
    {
        printf("%d ", arr[i]);
        printf("%d ", arr[7-i]);
    }    
}
