#include "pila.h"

void insertP(nodeP*& node, int data){
    if(node == nullptr){
        nodeP *tem = static_cast<nodeP *>(malloc(sizeof (struct nodeP)));
        tem->dato = data;
        node = tem;
        tem->up = nullptr;
    }else{
        insertP(node->up,data);
    }
}

void readP(nodeP*& node){
    if(node != nullptr){
       readP(node->up);
       printf("%d  ",node->dato);
    }
}

bool updateP(nodeP*& node,int dato, int updateDato){
    if(node != nullptr){
        if(node->dato == dato){
            node->dato = updateDato;
            return true;
        }
        updateP(node->up,dato,updateDato);
    }
    return false;
}

bool removeP(nodeP*& node,int dato){
    if(node != nullptr){
        if(node->dato == dato){
        nodeP ** aux = &node;
        *aux = node->up;
        }else{
            removeP(node->up,dato);
        }
    }
    return false;
}


