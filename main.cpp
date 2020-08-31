#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *leftChild;
  struct node *rightChild;
}node;

void insert(node *&root,int data){
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
}

void mostrar_arbol(node *root,int count){
    if(root == nullptr){

    }else{
        mostrar_arbol(root->rightChild,count+1);
        for (int i=0;i<count;i++){
            printf(" ");
        }
        printf("%d",root->data);
        mostrar_arbol(root->leftChild,count+1);
    }
}

void menu(node *root){
    int dato,opcion,contador = 0;

    do{
        printf("\t :MENU: \n");
        printf("1 .- Insertar nodo \n");
        printf("2 .- Mostrar \n");
        printf("3 .- Salir \n");
        scanf("%d",&opcion);
        switch (opcion) {
            case 1:
                printf("Digite el numero\n");
                scanf("%d",&dato);
                insert(root,dato);
                printf("\n");
            break;
            case 2:
                printf("Mostrando el arbol \n");
                mostrar_arbol(root,contador);
                printf("\n");
            break;
        }
    }while (opcion != 3);

}

static node *root = nullptr;
int main(){
    menu(root);
}
