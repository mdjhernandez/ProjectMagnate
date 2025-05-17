#include <iostream>
using namespace std;

struct Nodo {
    int valor;  // Variable para almacenar el valor numérico
    Nodo* siguiente;  // Puntero al siguiente nodo (opcional)
};

void insertarFinal(Nodo**Lista,int dato){
    Nodo*aux=*Lista;
    while(aux->siguiente!=nullptr){
        aux=aux->siguiente;
    }
    aux->siguiente=new Nodo;
    aux->siguiente->siguiente=nullptr;
    aux->valor=dato;

}

int main() {
    // Creación de un nodo dinámicamente
    Nodo* nodo1 = new Nodo;
    nodo1->valor = 42;  // Asignación de un valor entero
    nodo1->siguiente = nullptr;  // Inicialización del puntero

    cout << "El valor del nodo es: " << nodo1->valor << endl;
    cout<<"Hola mundo";



    
    delete nodo1;

    return 0;
}
