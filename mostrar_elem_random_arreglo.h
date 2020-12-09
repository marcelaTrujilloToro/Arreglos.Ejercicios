#include <stdio.h>
#include <time.h>

/*crear un arreglo donde el usuario indique el tamaño, luego llenar el arreglo con numero aleatorios entre 1 --> 100 y por ultimo mostrar
los elementos del arreglo*/

int pedir_numero1(){
    printf("Ingrese el tamaño del arreglo\n");
    int size =0;
    scanf("%d", &size);
    return size;
}

void aleatorio(){
    int size = pedir_numero1();
    int arreglo[size];

    // cada segundo que se ejecute generara nums aleatorios diferentes 
    srand(time(NULL)); 

    for (int i = 0; i < size; i++)
    {   
        //(limite inicial + rand()% (limite final + 1 - limite inicial))
        arreglo[i] = 1 + rand()% ((100 +1)-1); 

        printf("%d ", arreglo[i]);
    }    
   
}


