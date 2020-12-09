#include <stdio.h>
#include <stdbool.h>

/* leer dos arreglos de 5 numeros enteros cada uno
que estaran ordenados crecientemente. 
fusionar los dos arreglos en un tercero, de forma que los numeros sigan ordenados
 */

void llenar_arreglo9(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("Digite un numero: ");
        scanf("%d", &arr[i]);
    }
    
}

bool determinar_si_creciente1(int arr[], int n){
    bool creciente = true;

    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]> arr[i+1])
        {
            creciente = false;
        }        
    }
    if (creciente == false){
        printf("\n El arreglo no esta ordenado, digitelo nuevamente");
    }
    return creciente;
}

void fusionar_arreglos(int arr1[], int n1, int arr2[], int n2, int arr3[], int n3){
    int i= 0; // primer arreglo
    int j =0; // segundo arreglo
    int k = 0; // arreglo completo
    while (i<n1 && j< n2)
    {
        if (arr1[i] < arr2[j])
        {
           arr3[k] = arr1[i];
           i++; 
        }else
        {
            arr3[k] = arr2[j];
            j++;
        }
     k++;        
    }

    if (i==5)
    {
        while (j<5)
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
        
    }else if (j==5)
    {
        while (i<5)
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
    }
    
        
}

void imprimir_arreglo2(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
}



void imprimir_nuevo_arr5(int arr1[], int n1, int arr2[], int n2, int arr3[], int n3){
    bool creciente;
    printf("Digite los datos del primer arreglo\n");
    do
    {
        llenar_arreglo9(arr1, n1);
        creciente = determinar_si_creciente1(arr1, n1);
    } while (creciente == false);

    printf("Digite los datos del segundo arreglo\n");
    do
    {
        llenar_arreglo9(arr2, n2);
        creciente = determinar_si_creciente1(arr2, n2);
    } while (creciente == false);
   
   fusionar_arreglos(arr1, n1, arr2, n2, arr3, n3);
   printf("\nEl nuevo arreglo es: ");
   imprimir_arreglo2(arr3, n3);  
    
}

