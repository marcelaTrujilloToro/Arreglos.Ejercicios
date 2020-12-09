#include <stdio.h>

//calcular la suma y promedio de los numeros reales ingresados al arreglo (5)

void llenar_arreglo2(float arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("Ingrese un numero decimal: \n");
        scanf("%f", &arr[i]);
    }    
}

float obt_suma_elementos(float arr[], int size){
    float suma = 0;
    for (int i = 0; i < size; i++)
    {
        suma = suma + arr[i];
    }
    return suma;    
}

float promediar (float suma, int cant){
    float promedio =0;
    promedio = suma/cant;
    return promedio;
} 

void promediar_elem_arr(float arr[], int size){

    llenar_arreglo2(arr, size);
    float suma = obt_suma_elementos(arr, size); 
    float promedio = promediar(suma, size);
    printf("La suma de los numero en el arreglo es: %.2f \n", suma);
    printf ("El promedio de los numero en el arreglo es de: %.2f", promedio);
}
