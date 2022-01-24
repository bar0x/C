/* 

programma di esempio sull'utilizzo degli array, caricamento da tastiera


*/


#include <stdio.h>

#define DIM 5   //definisco una costante con valore intero pari a 5.

int main () {
    int i;              //variabile necessaria per il ciclo for di scorrimento sul vettore,
    int vet [DIM];      //dichiarazione di un vettore intero di DIM elementi,
    int somma;          //variabile per calcolare la somma totale dei valori inseriti nel vettore.


    //carico i valori nel vettore chiedendoli all'utente,

    for (i=0;i<DIM; i++) {
    printf ("valore in posizione %d: \n,i");
    scanf ("%d", &vet[i]);
    fflsh (stdin);
    }

    //visualizzo i valori inseriti nel vettore
    printf("Vettore: ");
    for(i=0;i<DIM;i++){
        printf ("%d", vet[i]);
    }
    printf ("\n\n");

    //calcolo la somma di tutti i valori presenti nel vettore
    somma = 0;
    for(i=0;i<DIM;i++){
        somma = somma + vet[i];
    }

    printf ("Somma totale: %d", somma);

    return (0);
}
