#include <stdio.h>

void llenar_arreglo1(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("Ingrese un valor: \n");
        scanf("%d", &arr[i]);
    }
    
}

int obtener_suma_elementos(int arr[], int size){
    int suma =0;
    for (int i = 0; i < size; i++)
    {
        suma = suma + arr[i];
    }
    return suma; 
}

void suma_elems_arr(int arr[], int size){
    llenar_arreglo1(arr, size);
    int suma = obtener_suma_elementos(arr, size);
    printf("La suma de los elementos del arreglo es: %d", suma);
}

