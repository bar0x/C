/*
   Esempio di utilizzo e gestione di un array mono-dimensionale
   Elenco funzioni richieste:
   x Input da tastiera di un vettore di interi.
   x visualizzazione di un vettore.
   x visualizzazione al contrario.
   x ricerca di un valore (ritorno 0/1 in caso negativo o positivo)
   x calcolo del valor medio
   - azzeramento di una cella scelta da utente.
   - scambio tra due celle scelte dall'utente.
   - ordinamento di un vettore.
   - ricerca valore massimo e/o minimo.
   
   ATTENZIONE:
   per ogni punto è richiesta una funzione specifica.
*/

#include <stdio.h>
#include <stdbool.h>
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
bool search4val(int[], int, int);
/**
 * @brief funzione che dato un vettore e la sua dimensione torna la media dei valori
 * @param int[] vettore da utilizzare;
 * @param int dimensione del vettore;
 * @return int media dei valori.
 */
float mediumVal(int [], int);
/**
 * @brief funzione che cancella la cella dell'indice scelto;
 * @param int[] vettore,
 * @param int grandezza del vettore,
 * @param int indice della cella da azzerare.
 */
void eraseCell(int[], int, int);

/* MAIN PROGRAM */
int main(){
   int vet[DIM];
   

   inputVettore(vet, DIM);
   printVettore(vet, DIM);
   printVettoreContrario(vet, DIM);
    
   printf ("\n search4val ritorna %d", search4val(vet, DIM, 5));

   printf("il valore medio del vettore è: %f\n", mediumVal(vet, DIM));
   
   eraseCell(vet, DIM, 5);

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

void printVettoreContrario(int v[], int _d){
    int i;
    printf ("\n");
    for (i= _d-1;i >= 0;i--){
        printf ("[%4d]", v[i]);
    }
        
}

bool search4val(int v[], int _d , int val){
    int j;
    for (j= 0; j < _d; j++){
         if (v[j] == val)
            return true;
    }
    return false;
}

float mediumVal(int v[], int _d){
   float tot_val=0;
   float medium;
   for(int i=0; i< _d; i++){
      tot_val+= v[i];
   }
   
   medium = tot_val / _d-1;
   return (medium);
}

void eraseCell(int v[], int _d, int val){
   printf ("quale cella vuoi cancellare? ");
   scanf ("%d", &val);
   fflush(stdin);

   for (int i=0; i < _d; i++){
      if (val == v[i])
         v[i] = 0;
         printf ("cella %d azzerata", v[i]);
   }
}