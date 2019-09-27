#include <iostream>
#include "Libro.h"
#include "ListaLibros.h"

int main() {

    Libro libro1(111, "Harry Potter y el Caliz de Fuego");
    Libro libro2(222, "El Principito");
    Libro libro3(333, "El Hobbit");
    Libro libro4(444, "Dracula");
    Libro libro5(555, "La Odisea");
    Libro libro6(777, "Cocori");


    ListaLibros* listaLibros = new ListaLibros();

    listaLibros->insertarInicio(libro1);
    listaLibros->insertarInicio(libro2);
    listaLibros->insertarInicio(libro3);
    listaLibros->insertarInicio(libro4);
    listaLibros->insertarInicio(libro5);
    
    int opcion;
    
    
    std::cout << "Lista de libros [" << listaLibros->totalNodos() << "] \n" << listaLibros->toString() << std::endl;
   
    // Se elimina el primer nodo
    listaLibros->eliminarInicio();
    std::cout << "Lista de libros [" << listaLibros->totalNodos() << "] \n" << listaLibros->toString() << std::endl;
    
    //Se elimina el ultimo nodo
     listaLibros->eliminarFinal();
    std::cout << "Lista de libros [" << listaLibros->totalNodos() << "] \n" << listaLibros->toString() << std::endl;

    // Se inserta al final de la lista
    listaLibros->insertarFinal(libro6);
    std::cout << "Lista de libros [" << listaLibros->totalNodos() << "] \n" << listaLibros->toString() << std::endl;

    std::cout<<"Bienvenido a la Biblioteca Nacional"<<endl;
    std::cout << "Lista de libros [" << listaLibros->totalNodos() << "] \n" << listaLibros->toString() << std::endl;
    std::cout<<"Por favor ingrese el codigo del libro que desea"<<endl;
    cin>>opcion;
    
    if (listaLibros->encontrado(opcion) == true) {

		cout << "El libro es:" + listaLibros->obtenerLibro(opcion).toString() << endl;
	}
	else
	{
		cout << "No existe" << endl;
	}
    
    
    // Se elimina toda la lista
    delete(listaLibros);
    std::cout << "Lista de libros [" << listaLibros->totalNodos() << "] \n" << listaLibros->toString() << std::endl;

    
    
    
    return 0;
}