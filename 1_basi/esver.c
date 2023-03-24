/* 
Autore: Mattia Baroni,

Data: 17.12.21,

Descrizione: considerando l'intervallo di numeri da 0 a 9 (0,1,2,3,4,5,6,7,8,9), realizare un programma
che richieda numeri interi fino a chè il numero non sia nell'intervallo, poi stampare a video
il numero maggiore e quello minore inserito,

*/
#include <stdio.h>
#include <stdbool.h>

int main () { 
    int n,min,max;
    n = 0;
    min = 0;
    max = 0;

    do{
        printf ("inserisci un numero: ");
        scanf ("%d",&n);
        fflush (stdin);

        if (n < max) {
            max = n;
        }
        if (n > min) {
            min = n;
        }
    }while ((n >= 0) && (n <= 9));

    printf ("il numero inserito minore e': %d, mentre il numero maggiore e': %d",min,max);
    return (0);
}