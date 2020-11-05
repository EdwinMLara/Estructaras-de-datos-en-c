#include <stdio.h>
#include <stdlib.h>
#include "arbol.h"

node* insert(node *&root,char data){
    node *tempNode = static_cast<node *>(malloc(sizeof(struct node)));

    tempNode->data = data;
    tempNode->leftChild = nullptr;
    tempNode->rightChild = nullptr;

    if(root == nullptr){
        root = tempNode;
    }else{
        int valor_raiz = root->data;
        if(data<=valor_raiz){
            insert(root->leftChild,data);
        }else{
            insert(root->rightChild,data);
        }

    }
    return tempNode;
}

void orden(node *root){
    if(root == nullptr){
        printf(" ");
    }else{
        orden(root->leftChild);
        printf("%c ",root->data);
        orden(root->rightChild);
    }
}

void preorden(node *root){
    if(root == nullptr){
        printf(" ");
    }else{
        printf("%c",root->data);
        preorden(root->leftChild);
        preorden(root->rightChild);
    }
}

void postorden(node *root){
    if(root == nullptr){
        printf(" ");
    }else{
        postorden(root->leftChild);
        postorden(root->rightChild);
        printf("%c",root->data);
    }
}

void menu(node *root){
    char dato;
    int opcion;

    do{
        printf("\t :MENU: \n");
        printf("1 .- Insertar nodo \n");
        printf("2 .- Mostrar \n");
        printf("3 .- Salir \n");
        scanf("%d",&opcion);
        switch (opcion) {
            case 1:
                printf("Digite el numero\n");
                scanf("%c",&dato);
                insert(root,dato);
                printf("\n");
            break;
            case 2:
                printf("Mostrando el arbol \n");
                orden(root);
                printf("\n");
            break;
        }
    }while (opcion != 3);

}
