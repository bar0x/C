/* 
Programma che richiede l'inserimento di un vettore di 5 elementi.
    -Visualizza il vettore,
    -Determina e visualizza i valore maggiore presente nel vettore.
*/

#include <stdio.h>

#define DIM 5

int main() {
    int vet[DIM];   //vettore per i valori.
    int i;          //variabile per i cicli.
    int max;        //variabile per il massimo valore.


    //inserimento dei valori nel vettore:

    for (i=0; i<DIM; i++){
        printf ("Valore posizione %d: \n",i);
        scanf ("%d", &vet[i]);
        fflush (stdin);
    }


    //stampo i valori del vettore
    max = 0;
    for (i=0; i<DIM; i++){
        if (vet[i] > max)
        
    }

    return (0);
}