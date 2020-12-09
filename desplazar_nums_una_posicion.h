# include <stdio.h>

// crear un pograma que lea por teclado un arreglo de 6 numeros enteros
// y lo desplace una posicion hacia abajo:
//el primero pasa a ser el segundo, el segundo pasa al tercero... el ultimo pasa a ser el primero

void llenar_arreglo8(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("\nIngrese un numero:");
        scanf("%d", &arr[i]);
    }       
}

void desplazar_arreglo1(int arr[], int n){
    for (int i = n-1; i >=0; i--)
    {
        arr[i+1] = arr[i];
    }        
}

void imprimir_arr1(int arr[], int n ){
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }   
}

void imprimir_nuevo_arreglo9(int arr[], int n){
    llenar_arreglo8(arr, n);
    int ultimo = arr[5];
    desplazar_arreglo1(arr, n);
    arr[0] = ultimo;
    imprimir_arr1(arr,n);
}

