#include<stdlib.h>
#include<stdio.h>
#include<limits.h>
#include"arreglos.h"
int longitudEnteros(int *vector){
    int n = 0;
    int *it = vector;
    while(*it != INT_MAX){
        ++n;
        ++it;
    }
    return n;
}

void appendEnC(int **numeros,int nuevoElemento){
    int longitud = longitudEnteros(*numeros);
    int *resultado = (int *)malloc(sizeof(int)*(longitud+2));
    int *it_resultado = resultado;
    for(int i=0;i<longitud;i++){
        *resultado=**numeros;
        ++*numeros;
        ++resultado;
    }
    *resultado = nuevoElemento;
    ++resultado;
    *resultado = INT_MAX;
    *numeros = it_resultado;
}

void mostrar_arreglo_enteros(int * arreglo){
    printf("\n");
    while(*arreglo != INT_MAX){
        printf("%d\n",*arreglo);
        ++arreglo;
    }
}

int in(int * lista,int n){
    int i;
    int * it = lista;
    for(i = 0; it[i] != INT_MAX;i++){
        if(it[i] == n){
            return 1;
        }
    }
    return 0;
}

