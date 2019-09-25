//
// Created by Maikol Guzman  on 2019-09-16.
//

#include "Nodo.h"

Nodo::Nodo() {}

Nodo::Nodo(const Libro &libro, Nodo *siguiente) : libro(libro), siguiente(siguiente) {}

Nodo::~Nodo() {

}

const Libro &Nodo::getLibro() const {
    return Libro;
}

void Nodo::setLibro(const Libro &libro) {
    Nodo::libro = libro;
}

Nodo *Nodo::getSiguiente() const {
    return siguiente;
}

void Nodo::setSiguiente(Nodo *_siguiente) {
    Nodo::siguiente = _siguiente;
}

std::string Nodo::toString() {
    return libro.toString();
}