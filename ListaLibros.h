//
// Created by Maikol Guzman  on 2019-09-16.
//

#ifndef LAB_6_LISTAS_ENLAZADAS_LISTALIBROS_H
#define LAB_6_LISTAS_ENLAZADAS_LISTALIBROS_H


#include <ostream>
#include "Nodo.h"

class ListaLibros {
    Nodo *primero;
    Nodo *actual;
    Nodo *ultimo;

public:
    ListaLibros();

    virtual ~ListaLibros();

    void insertarInicio(const Libro& _libro);
    void insertarFinal(const Libro& _libro);
    bool eliminarInicio();
    int totalNodos();
    bool listaVacia();

    Nodo *getPrimero() const;

    void setPrimero(Nodo *primero);

    Nodo *getActual() const;

    void setActual(Nodo *actual);

    std::string toString();
};

#endif //LAB_6_LISTAS_ENLAZADAS_LISTALIBROS_H
