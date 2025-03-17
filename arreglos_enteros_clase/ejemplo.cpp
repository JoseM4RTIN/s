#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<cstring>
// #include<cstring>

using namespace std;

struct Objeto{

    int ganancia;
    int peso;
    string nombre;

    Objeto(){
        this->ganancia = 0;
        this->peso = -1;
        this->nombre = "Objeto Vacio";
    }

    Objeto(int ganancia, int peso, string nombre){
        this->ganancia = ganancia;
        this->peso = peso;
        this->nombre = nombre;
    }

    void mostrarObjeto(){        
        cout<<endl<<"Nombre -> "<<this->nombre;
        cout<<endl<<"Peso -> "<<this->peso;
        cout<<endl<<"Ganancia -> "<<this->ganancia;
    }

};

struct Mochila{
    vector<Objeto> objetos;
    int capacidad;

    Mochila(){
        this->capacidad = 0;
        for(int i = 0;i<5;++i){
            this->objetos.push_back(Objeto());
        }
    }

    void mostrarContenidoMochila(){
        cout<<endl<<"Capacidad ->"<<this->capacidad;
        cout<<endl<<"Objetos:";
        for(int i=0;i<this->objetos.size();++i){
            cout<<endl<<"---------------------"<<endl;
            this->objetos[i].mostrarObjeto();
            cout<<endl<<"---------------------"<<endl;
        }
    }

};

int main(){

    Mochila mochila;
    
    mochila.objetos.push_back(Objeto(3000,15,"tijeras"));
    mochila.objetos[0].nombre = "Camaras fotograficas";
    
    mochila.mostrarContenidoMochila();

    return 0;
}

