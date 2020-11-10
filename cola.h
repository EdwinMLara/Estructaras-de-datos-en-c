#ifndef COLA_H
#define COLA_H
typedef struct nodeC{
    int data;
    nodeC *sig;
    nodeC *ant;
}nodeC;

void insertC(nodeC *& node,int data);

#endif // COLA_H
