#ifndef ARBOL_H
#define ARBOL_H
typedef struct node{
  char data;
  struct node *leftChild;
  struct node *rightChild;
}node;

node* insertA(node *&root,char data);
void orden(node *root);
void preorden(node *root);
void postorden(node *root);
void menu(node *root);

#endif // ARBOL_H
