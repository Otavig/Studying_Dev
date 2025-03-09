#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
   int data;
   struct Node* prox;
} Node;

Node* criarNo(int valor) {
    Node* novoNo = (Node*)malloc(sizeof(Node));
    novoNo->data = valor;
    novoNo->prox = NULL;
    return novoNo;
}

Node* inserirNo(Node** head, int valor){
    Node* novoNo = criarNo(valor);
    novoNo->prox = *head;
    *head = novoNo;
}

void imprimirLista(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->prox;
    }
    printf("NULL\n");
}

int main() {
    Node* head = NULL;
    
    inserirNo(&head, 10);
    inserirNo(&head, 20);

    printf("Lista ligada: ");
    imprimirLista(head);
}