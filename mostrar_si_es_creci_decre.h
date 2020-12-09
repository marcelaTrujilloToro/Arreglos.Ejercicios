# include <stdio.h>
# include <stdbool.h>

// leer 5 numeros reales. 
// se debe indicar si estan ordenados en forma creciente, decreciente o en desorden

void llenar_arreglo3(float arr[], int n){

    for (int i = 0; i < n; i++)
    {
        printf("\n Ingrese un numero:");
        scanf("%f", &arr[i]);
    }
}

void determinar_crec_decre1(float arr[], int n){
    bool creciente = false;
    bool decreciente = false;

    for (int i = 0; i < 4; i++)
    {
        if (arr[i]< arr[i+1])
        {
            creciente = true;
        }

        if (arr[i] > arr[i+1])
        {
            decreciente = true;
        }        
    }

    if (creciente == true && decreciente == false)
    {
        printf("Los numeros estan en forma creciente");
    }else if (creciente == false && decreciente == true)
    {
        printf("Los numeros estan en forma decreciente");
    }else
    {
        printf("Los numeros estan en forma desordenada");
    }    
}

void imprimir_resultado1(float arr[], int n){
    llenar_arreglo3(arr, n);
    determinar_crec_decre1(arr, n);
}

