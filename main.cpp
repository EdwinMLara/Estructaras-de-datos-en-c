#include <stdio.h>
#include <stdlib.h>
#include "arbol.cpp"
#include "lista.cpp"

void testTree(){
    static node *root = nullptr;
    insert(root,'F');
    node *B = insert(root->leftChild,'B');
    node *G = insert(root->rightChild,'G');
    node *D = insert(B->rightChild,'D');
    insert(B->leftChild,'A');
    insert(D->rightChild,'E');
    insert(D->leftChild,'C');
    node *I = insert(G->rightChild,'I');
    insert(I->leftChild,'H');

    preorden(root);
    printf("\n");
    orden(root);
    printf("\n");
    postorden(root);
    printf("\n");
}


void testList(){
    static nodeL *root = nullptr;
    insert(root,1);
    insert(root,2);
    insert(root,3);
    insert(root,4);
    showList(root);
    printf("\n");
    remove(root,3);
    update(root,4,12);
    showList(root);
}
int main(){
    testList();
}
