#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char n[30];
    char c[30];
    int a;
}   Persona;

typedef struct nodo {
    Persona p;
    struct nodo *next;
}Nodo;

/**
 * @brief Add a new node to the head of the list.
 * @param Nodo* Pointer to the head.
 * @param Persona Structure pre filled with values.
 * @param Return the reference of the new head.
 */
Nodo* addHead (Nodo*, Persona);
void showLista(Nodo *);


int main(){
    Persona x;

    strcpy(x.n, "Andrea");
    strcpy(x.c, "Bianchi");
    x.a = 1997;
    addTesta(Nodo* _head,Persona _p);

    strcpy(x.n, "Gigi");
    strcpy(x.c, "Romero");
    x.a = 2023;
    addTesta(Nodo* _head,Persona _p);

    strcpy(x.n, "Tuco");
    strcpy(x.c, "Salamanca");
    x.a = 1972;
    addTesta(Nodo* _head,Persona _p);

    return 0;
}


Nodo* addHead(Nodo* _head, Persona _p){
    Nodo* nh;
    nh = malloc(sizeof(Nodo));
    nh->next  = _head;
    nh->p = _p;
    return (nh);
}

void showLista(Nodo *_testa){
    Nodo *tmp;
    tmp = testa;
    while (tmp != NULL){
        tmp = tmp->next;
        printf("%s, %s, %d", x.n, x.c, x.a);
    }
}