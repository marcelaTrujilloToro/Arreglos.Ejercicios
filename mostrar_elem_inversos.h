#include <stdio.h>

// crea un arreglo con N caracteres, lee los elementos por tclado
//guardarlos en el arreglo y mostrarlos en el orden inverso al introducido

int pedir_numero2(){
    int cant = 0;
    printf("\nDigite el tamanio del arreglo");
    scanf("%d", &cant);
    return cant;
} 

void llenar_arreglo11(char arr[], int n ){
    for (int i = 0; i < n; i++)
    {
        printf("\n Ingrese un caracter: ");
        scanf(" %c", &arr[i]);
    }    
}

void imprimir_arreglo_inverso(char arr[], int n){
    llenar_arreglo11(arr, n);
    for (int i = n-1 ; i>=0; i--)
    {
        printf("%c ", arr[i]); 
    }    
}
 