/*
   Esempio di utilizzo e gestione di un array mono-dimensionale
   Elenco funzioni richieste:
   x Input da tastiera di un vettore di interi.
   x visualizzazione di un vettore.
   x visualizzazione al contrario.
   - ricerca di un valore (ritorno 0/1 in caso negativo o positivo)
   - calcolo del valor medio
   - azzeramento di una cella scelta da utente.
   - scambio tra due celle scelte dall'utente.
   - ordinamento di un vettore.
   - ricerca valore massimo e/o minimo.
   
   ATTENZIONE:
   per ogni punto è richiesta una funzione specifica.
*/
#include <stdio.h>

#define DIM 5

/* Prototipi delle funzioni */
/* ======================== */

/**
 * @brief Richiede in input i valori da inserire in un vettore.
 * @param int[] Vettore da utilizzare nella funzione.
 * @param int Dimensione del vettore passato.
 */
void inputVettore(int[], int);
/**
 * @brief Stampa un vettore passato alla funzione.
 * @param int[] Vettore da utilizzare nella funzione.
 * @param int Dimensione del vettore passato.
 */
void printVettore(int[], int);
/**
 * @brief funzione che stampa il vettore al contrario.
 * @param int[] vettore da stampare al contrario.
 * @param int dimensione del vettore passato.
 */
void printVettoreContrario(int[], int);
/**
 * @brief funzione che dato un valore restituisce 1 se trovato nel vettore, altrimenti torna 0.
 * @param int[] vettore che si vuole usare.
 * @param int grandezza del vettore.
 * @param int valore da cercare.
 */
void search4val(int[], int, int);



/* MAIN PROGRAM */
int main(){
   int vet[DIM];
   

    inputVettore(vet, DIM);
    printVettore(vet, DIM);
    printVettoreContrario(vet, DIM);
    
    if (search4val(vet, DIM, ))
        printf("1");
    else
        printf ("0");

   
   return(0);
}

/* Sviluppo delle singole funzioni */
void inputVettore(int _v[], int _d){
   int i;
   for(i=0; i<_d; i++){
      printf("Inserisci il valore alla posizione [%d]: ", i);
      scanf("%d", &_v[i]);
      fflush(stdin);
   }
}

void printVettore(int _v[], int _d){
   int i;
   for(i=0; i<_d; i++){
      printf("[%4d]", _v[i]);
   }
}

void printVettoreContrario(int v[], int dim){
    int i;
    printf ("\n");
    for (i= dim-1;i >= 0;i--){
        printf ("[%4d]", v[i]);
    }
        
}

void search4val(int v[], int dim , int val){
    for (int i= 0; i> dim-1; i++){
        if (val == v[i])
            return true;
    }
    return false;
}

