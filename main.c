#include <stdio.h>
#include <stdlib.h>
#include "suma_arreglo.h"
#include "promedio_elem_arr.h"
#include "mostrar_elem_random_arreglo.h"
#include "mostrar_elem_inversos.h"
#include "mayor_y_menor_del_arr.h"
#include "imprimir_nums.h"
#include "mostrar_si_es_creci_decre.h"
#include "desplazar_nums_una_posicion.h"
#include "insertar_nuevo_num_al_arr.h"
#include "eliminar_elem_de_posicion.h"
#include "combinar_dos_arr.h"

#define OPCION_SALIR 12

void sumar_arreglo()
{
    int n = 2;
    int *arr = malloc(n * sizeof(int));
    suma_elems_arr(arr, n);
}
void promedio_arreglo()
{
    int n = 5;
    float *arr = malloc(n * sizeof(float));
    promediar_elem_arr(arr, n);
}

void imprimir_arr_aleatorio()
{
    aleatorio();
}

void imprimir_a_la_inversa()
{
    int n = pedir_numero2();
    char *arr = malloc(n + 1 * sizeof(char));
    imprimir_arreglo_inverso(arr, n);
}

void menor_mayor()
{
    int n = pedir_numero3();
    float *arr = malloc(n * sizeof(float));
    imprimir_mayor_y_menor(arr, n);
}

void imprimir_diferente_orden()
{
    int n = 8;
    int *arr = malloc(n * sizeof(int));
    imprimir_numeros(arr, n);
}

void creciente_decreciente()
{
    int n = 5;
    float *arr = malloc(n * sizeof(float));
    imprimir_resultado1(arr, n);
}

void desplazar_nums()
{
    int n = 6;
    int *arr = malloc(n * sizeof(int));
    imprimir_nuevo_arreglo9(arr, n);
}

void insertar_num_ordenado()
{
    int n = 6;
    int *arr = malloc(n * sizeof(int));
    imprimir_nuevo_arr9(arr, n);
}

void eliminar_arreglo()
{
    int n = 5;
    int *arr = malloc(n * sizeof(int));
    imprimir_nuevo_arr7(arr, n);
}

void fusionar_dos_arr()
{
    int n1 = 5;
    int *arr1 = malloc(n1 * sizeof(int));
    int n2 = 5;
    int *arr2 = malloc(n2 * sizeof(int));
    int n3 = 10;
    int *arr3 = malloc(n3 * sizeof(int));

    imprimir_nuevo_arr5(arr1, n1, arr2, n2, arr3, n3);
}

int main()
{
    int opcion = 0;
    do
    {
        printf("\nMENU\n");
        printf("1. Sumar elementos de un arreglo\n");
        printf("2. Sumar y promediar elementos de un arreglo\n");
        printf("3. Pedir el tamaño del arreglo y llenarlo con numeros aleatorios\n");
        printf("4. Imprimir arreglo al reves\n");
        printf("5. Mostrar el menor y el mayor de un arreglo\n");
        printf("6. Imprimir el arreglo asi: el 1° - el ultimo - el 2° - el penultimo....\n");
        printf("7. Mostrar si el arreglo esta creciente, decreciente o desordenado\n ");
        printf("8. Desplazar numeros una posicion\n");
        printf("9. Insertar un numero en un arreglo ordenado\n");
        printf("10. Eliminar un numero de un arreglo\n");
        printf("11. fusionar dos arreglos\n");
        printf("12. Salir\n");

        printf("Digite una opcion:");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            sumar_arreglo();
            break;
        case 2:
            promedio_arreglo();
            break;
        case 3:
            imprimir_arr_aleatorio();
            break;
        case 4:
            imprimir_a_la_inversa();
        case 5:
            menor_mayor();
            break;
        case 6:
            imprimir_diferente_orden();
            break;
        case 7:
            creciente_decreciente();
            break;
        case 8:
            desplazar_nums();
            break;
        case 9:
            insertar_num_ordenado();
            break;
        case 10:
            eliminar_arreglo();
            break;
        case 11:
            fusionar_dos_arr();
        }

    } while (opcion != OPCION_SALIR);
}