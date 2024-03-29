#include <stdio.h>
#include <stdlib.h>

// Definizione dells truttura Nodo
typedef struct nodo{
    int val;
    struct nodo *next;
}Nodo;


// Dichiarazione dei prototipi
Nodo* addTesta(Nodo *, int);
void showLista(Nodo *);
void showListaRecursive(Nodo *);
void showListaReversedRecursive(Nodo *);
/**
 * @brief Ricerca il valore massimo o minimo interno alla lista.
 * @param Nodo* Puntatore alla testa della lista.
 * @param int 0->Minimo; 1->Massimo
 * @return Valore trovato.
*/
int ricercaMaxMinLista(Nodo *, int);
int contaNodi(Nodo*);



// ### MAIN PROOGRAM ###
int main(){
    Nodo *t;        // puntatore alla testa della lista.
    t = NULL;       // inizialmente punta a NULL (nessuna lista creata)

    // eseguo tre inserimenti di prova.
    t = addTesta(t, 5);
    t = addTesta(t, 7);
    t = addTesta(t, 9);

    // eseguo la chiamata della funzione di visualizzazione della lista.
    showLista(t);
    printf("\n\n");
    showListaRecursive(t);
    printf("\n\n");
    showListaReversedRecursive(t);

    return(0);
}

// Definizione delle funzioni
Nodo* addTesta(Nodo *_testa, int _val){
    Nodo *tmp;
    tmp = malloc(sizeof(Nodo));
    tmp->next = _testa;
    tmp->val = _val;
    return(tmp);
}

void showLista(Nodo *_testa){
    Nodo *tmp;
    tmp = _testa;
    while(tmp != NULL){
        printf("Address: %d; val: %d, next: %d\n", tmp, tmp->val, tmp->next);
        tmp = tmp->next;
    }
}

void showListaRecursive(Nodo *_tmp){
    if(_tmp != NULL){
        printf("Address: %d; val: %d, next: %d\n", _tmp, _tmp->val, _tmp->next);
        showListaRecursive(_tmp->next);
    }
}

void showListaReversedRecursive(Nodo *_tmp){
    if(_tmp != NULL){
        showListaReversedRecursive(_tmp->next);
        printf("Address: %d; val: %d, next: %d\n", _tmp, _tmp->val, _tmp->next);        
    }
}

Nodo* removeHead(Nodo *head){
    if (head == NULL)
        return NULL;
    Nodo tmp = head->next;
    free (head);
    return tmp;
}

Nodo* pushCoda(Nodo *_Head, int val){
    Nodo *tmp1 =  _head;
    Nodo *tmp2 = (Nodo*) malloc (sizeof(Nodo));        
}

int ricercaMaxMinLista(Nodo *_head, int _scelta){
	// scelta == 0, minimo
	// scelta == 1, massimo
	if(_head != NULL){
		if(_scelta == 1){		// ricerca massimo
			int max = _head->val;
			Nodo *_tmp = _head;
			while ( _tmp != NULL){	// scorro lista
				if(_tmp->val > max )	// aggiorno massimo
					max = _tmp->val;
				_tmp = _tmp->next;
			}
			return max;
		}
		if(_scelta == 0){		// ricerca minore
			int min = _head->val;
			Nodo *_tmp = _head;
			while ( _tmp != NULL){	// scorro lista
				if(_tmp->val < min )	// aggiorno minimo
					min = _tmp->val;
				_tmp = _tmp->next;
			}
			return min;
		}
		return -1;	// se parametro errato
	}
	return -1;		// se lista vuota
}

int contaNodi(Nodo* _head){
	int cnt = 0;	// numero nodi
	Nodo* _tmp = _head;	// nodo tmp per scorrere
	while ( _tmp != NULL){			// scorro lista
		cnt++;
		_tmp = _tmp->next;
	}
	return cnt;		// ritorno numero nodi
}

Nodo* pushInPos(Nodo* _head, int pos, int val){
    Nodo* nPos = malloc(sizeof(Nodo));
    nPos->val = val;
    nPos->next = 
    int cnt = contaNodi(Nodo*);
    Nodo * t;
    if(nPos == 1){
        t = addTesta(*_head, val);
        return t;
    }
}

  