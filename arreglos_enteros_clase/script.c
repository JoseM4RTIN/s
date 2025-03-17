//Librerías del sistema
#include<stdlib.h>
#include<stdio.h>
#include<limits.h>
//Módulos del proyecto
#include"incrementos/incrementos.h"
#include"arreglos/arreglos.h"



int main(){

    int * list = (int *)malloc(sizeof(int)*5);
    int * it = list;
    *it = 1;
    it++;
    *it = 2;
    it++;
    *it = 3;
    it++;
    *it = 4;
    it++;
    *it = INT_MAX;
    if(in(list,40)){
        printf("Esta");
    }else{
        printf("No esta");
    }
    mostrar_arreglo_enteros(list);
    appendEnC(&list,40);
    printf("Arreglo final: ");
    mostrar_arreglo_enteros(list);
    // Falso para errores
    return 0;


}

