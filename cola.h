#ifndef COLA_H
#define COLA_H
#include <stdio.h>
#include <stdlib.h>

typedef struct nodeC{
    int data;
    nodeC *sig;
    nodeC *ant;
}nodeC;

void insertC(nodeC *& node,int data);

#endif // COLA_H
