// programma che calcola la media dei vettori


#include <stdio.h>

#define DIM 5   //definisco una costante con valore intero pari a 5.

int main () {
    int i;              
    int vet [DIM];      
    int somma;          
    int media;

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
