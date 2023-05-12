#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    nome[20];
    cognome[20];
} Nodo;

void addTesta (Nodo**, char[], char[]);
void showLista(Nodo *);

int main(){
    Nodo* t;
    t = NULL;
    char v1[20];
    char v2[20];

    addTesta(&t, v1, v2);
    showLista(t);
    return 0;
}

void addTesta(){
     
}

void showLista(Nodo *_head){
    Nodo *tmp;
    tmp = _head;
    while(tmp != NULL){
        print("%s, %s\n", tmp->nome, tmp->cognome);
        tmp = tmp->next;
    }
}