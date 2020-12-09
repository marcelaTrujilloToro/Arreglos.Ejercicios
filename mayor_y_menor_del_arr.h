#include <stdio.h>

// leer n numeros, guardarlos en un arreglo, calcular cual es el mayor y cual es el menor

int pedir_numero3(){
    int n =0;
    printf("Digite el tamanio del arreglo");
    scanf("%d", &n);
    return n;
}

void llenar_arreglo4(float arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("\n Digite un numero:");
        scanf(" %f", &arr[i]);
    }    
}

float determinar_mayor(float arr[], int n){
    float mayor = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > mayor)
        {
            mayor = arr[i];
        }        
    }
    return mayor;
}

float determinar_menor(float arr[], int n){
    float menor = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < menor)
        {
            menor = arr[i];
        }        
    }
    return menor;
}

void imprimir_mayor_y_menor(float arr[], int n){
    llenar_arreglo4(arr, n);
    float mayor = determinar_mayor(arr, n);
    float menor = determinar_menor(arr, n);
    printf("El numero mayor del arreglo es: %.2f y el menor es: %.2f ", mayor, menor);
}

 