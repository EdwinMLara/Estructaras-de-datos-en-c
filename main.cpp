#include <stdio.h>
#include <stdlib.h>
#include "arbol.cpp"
#include "lista.cpp"
#include "pila.cpp"
#include "cola.h"

void testTree(){
    static node *root = nullptr;
    insertA(root,'F');
    node *B = insertA(root->leftChild,'B');
    node *G = insertA(root->rightChild,'G');
    node *D = insertA(B->rightChild,'D');
    insertA(B->leftChild,'A');
    insertA(D->rightChild,'E');
    insertA(D->leftChild,'C');
    node *I = insertA(G->rightChild,'I');
    insertA(I->leftChild,'H');

    preorden(root);
    printf("\n");
    orden(root);
    printf("\n");
    postorden(root);
    printf("\n");
}


void testList(){
    static nodeL *root = nullptr;
    insertL(root,1);
    insertL(root,2);
    insertL(root,3);
    insertL(root,4);
    readL(root);
    printf("\n");
    removeL(root,3);
    updateL(root,4,12);
    readL(root);
}

void testPila(){
    static nodeP *root = nullptr;
    insertP(root,2);
    insertP(root,4);
    insertP(root,6);
    insertP(root,8);
    updateP(root,8,10);
    readP(root);
    printf("\n");
    removeP(root,6);
    readP(root);
    printf("\n");

}

void testCola(){
    static nodeC *root = nullptr;
    insertC(root,3);
    insertC(root,6);
}
int main(){
    testCola();
}
