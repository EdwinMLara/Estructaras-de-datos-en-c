#include "lista.h"

nodeL* insert(nodeL*& node,int dato){
    nodeL* tem = nullptr;
    if(node == nullptr){
        tem = static_cast<nodeL *>(malloc(sizeof (struct nodeL)));
        tem->dato = dato;
        node = tem;
        node->sig = nullptr;
    }else{
      insert(node->sig,dato);
    }
    return tem;
}

bool remove(nodeL *& node,int dato){
    nodeL *aux = node;
    nodeL *prev = nullptr;
    while(aux->dato != dato){
        prev = aux;
        aux = aux->sig;
        if(aux == nullptr)
            return false;
    }
    prev->sig = aux->sig;
    free(aux);
    return true;
}

bool update(nodeL*& node,int dato, int updateDato){
    nodeL *aux = node;
    while(aux->dato != dato){
        aux = aux->sig;
        if(aux == nullptr)
            return false;
    }
    aux->dato = updateDato;
    return true;
}

void showList(nodeL*& node){
    if(node != nullptr){
        printf("%d --",node->dato);
        showList(node->sig);
    }
}


