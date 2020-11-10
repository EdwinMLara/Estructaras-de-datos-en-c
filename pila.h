#ifndef PILA_H
#define PILA_H

#include <stdio.h>
#include <stdlib.h>

typedef struct nodeP {
    int dato;
    struct nodeP *up;
}nodeP;

void insertP(nodeP*& node, int dato);
void readP(nodeP*& node);
bool updateP(nodeP*& node,int dato, int updateDato);
bool removeP(nodeP*& node,int dato);

#endif // PILA_H
