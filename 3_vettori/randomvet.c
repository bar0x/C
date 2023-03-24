/* 
Inizializzare un vettore di 10 elementi con valoti random compresi tra 1 e 25 estremi compresi.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 100

int main () {
    int vet[DIM];
    int i;

    //inizializzo il generatore di numeri random:
    srand(time(NULL));

    // ciclo di caricamento valori nel vettore:

    for (i=0; i<DIM; i++){
        vet[i] = rand()%25 + 1;
    }

    /* 
    rand() -> genera un numero casuale grande (non ci importa quanto)
    rand() %25 + 1 --> resto della divisione per 25, genera unnumero possibile tra 0 e 24, 
    aggiungendo +1 significa che sposto il random 0-24 di una unità ovvero 1-25.
    */


   for (i=0; i<DIM; i++){
       printf ("%d | ",vet[i]);
   }


    return (0);
}
