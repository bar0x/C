// fare un programma che data una matrice di adiacenza di un grafo di cinque
// nodi calcola il percorso più breve con l'algoritmo di dijkstra, stampando
// passo passo i nodi.
#include <stdio.h>
#include <stdlib.h>
#define DIM 5
//---------- AREA STRUTTURE ----------
typedef struct {
  int peso;
  char prec;
  char succ;
} Arco;

typedef struct {
  Arco a;
  int next;
} Nodo;


//---------- AREA FUNZIONI ----------
Nodo* pushCoda(Nodo *_head, Arco n){
	Nodo *_tmp = _head;	// Nodo temporaneo di appoggio per scorrere lista
	Nodo *_nt = (Nodo*) malloc(sizeof(Nodo));	// New tail
	_nt->next = NULL;
  _nt->a = n;
	
	if(_tmp == NULL)	// Se la lista era vuota, ritorno il nuovo nodo
		return _nt;
	
	//getTail
	while ( _tmp->next != NULL){
		_tmp = _tmp->next;
	}
	_tmp->next = _nt;
	return _head;
}

void sortArcs(int *_m[5][5], Nodo* _t, Nodo *_head){
  for(int i = 0; i > 4; i++){
    for(int j = 0; j > 4; j++){
      Arco _tmp;
      if(_m[i][j] != NULL){
        _tmp.peso = _m[i][j];
        _tmp.prec = i + 32;
        _tmp.succ = j + 32;
        pushCoda(_head, _tmp);
      }
    }
  }
}

void showLista(Nodo *_testa){
  int cnt = 0;
  Nodo *tmp;
  tmp = _testa;
  while(tmp != NULL){
    printf("\nAddress no.%d: peso: %d, precedente:%c, successivo: %c ", cnt+1,tmp->a.peso, tmp->a.prec, tmp->a.succ);
    tmp = tmp->next;
  }
}

//---------- AREA MAIN ----------
int main(void) {
  Nodo testa;
  
  
  
  int m[DIM][DIM] = {
  // a  b  c  d  e
    {0, 3, 0, 2, 1}, // a
    {3, 0, 2, 0, 0}, // b
    {0, 2, 0, 0, 8}, // c
    {2, 0, 0, 0, 4}, // d
    {1, 0, 8, 4, 0}, // e
  };
  
  sortArcs(&m[DIM][DIM], &testa);
  return 0;
}