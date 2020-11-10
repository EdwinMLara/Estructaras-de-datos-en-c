#ifndef LISTA_H
#define LISTA_H

#include <stdio.h>
#include <stdlib.h>

typedef struct nodeL {
    int dato;
    struct nodeL *sig;
}nodeL;

void insert(nodeL*& node, int dato);
bool remove(nodeL*& node,int dato);
bool update(nodeL*& node,int dato, int updateDato);
void showList(nodeL*& node);

void goodTasted(nodeL*& node,int dato);


#endif // LISTA_H
