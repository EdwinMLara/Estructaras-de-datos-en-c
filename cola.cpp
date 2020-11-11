#include "cola.h"

void insertC(nodeC*& node, int data){
    if(node == nullptr){
        nodeC *tem = static_cast<nodeC*>(malloc(sizeof (struct nodeC)));
        tem->data = data;
        tem->sig = node;
        tem->ant = node;
    }else{
        insertC(node->ant,data);
    }
}
