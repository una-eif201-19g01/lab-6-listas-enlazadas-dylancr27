//
// Created by Maikol Guzman  on 2019-09-16.
//

#ifndef LAB_6_LISTAS_ENLAZADAS_LIBRO_H
#define LAB_6_LISTAS_ENLAZADAS_LIBRO_H


#include <string>
#include <ostream>

class Libro {
    int id;
    std::string nombre;
   
public:
    Libro();

    Libro(int id, const std::string &nombre);

    virtual ~Libro();

    int getId() const;

    void setId(int id);

    const std::string &getNombre() const;

    void setNombre(const std::string &nombre);

    std::string toString();
    
};
#endif //LAB_6_LISTAS_ENLAZADAS_LIBRO_H
