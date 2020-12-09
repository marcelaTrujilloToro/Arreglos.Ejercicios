#include <stdio.h>
#include <stdbool.h>

//leer 5 elementos que se introduciran ordenados de forma creciente
//estos se guardaran en un arreglo de tamaño 6
// leer un numero N e insertarlo en el lugar adecuado para siga ordenado el arreglo

void llenar_arreglo5(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        printf("\nDigite un numero:");
        scanf("%d", &arr[i]);
    }    
}

bool determinar_si_creciente(int arr[], int n){
    bool creciente = true;
    for (int i = 0; i < n-2; i++)
    {
        if (arr[i] > arr[i+1])
        {
            creciente = false;            
        }        
    }
    if (creciente == false)
    {
        printf("\n El arreglo no esta ordenado, digitelo nuevamente:");
    }
    
    return creciente;    
}

int determinar_posicion(int arr[], int n, int nuevo){
    
    int posicion =0;
    int i = 0;
    while (arr[i] < nuevo && i < n)
    {
        posicion = posicion+1;
        i++;
    }
    return posicion;
    
}

void desplazar_arreglo(int arr[], int n, int posicion){
    for (int i = n-1; i >=posicion; i--)
    {
        arr[i+1] = arr[i];
    }    
}

void imprimir_arr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }    
}

void imprimir_nuevo_arr9(int arr[], int n){
    bool creciente;
    
    do
    {      
        llenar_arreglo5(arr, n);         
        creciente = determinar_si_creciente(arr, n);
    } while (creciente == false);

    int nuevo =0;
    printf("\nIngrese un nuevo numero: ");
    scanf("%d", &nuevo);

    int posicion = determinar_posicion(arr, n, nuevo);
    desplazar_arreglo(arr, n, posicion);

    arr[posicion] = nuevo;

    printf("\n El nuevo arreglo es: ");
    imprimir_arr(arr, n);

}

