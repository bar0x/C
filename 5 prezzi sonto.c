/*
Auth: Mattia Baroni
Date: 15.11.21
File: p02.c
Description: realizzare un programma che richiede cinque ipotetici prezzi,
calcola il totale e se è superiore a 50, calcola-visualizza e applicauno sconto del 25%, comunicando il
nuovo totale.
*/

#include <stdio.h>
int main () {
    int a, b, c, d, e;
    int tot;
    int temp;
    int sconto;

    //inserisco la prima variabile
    printf ("inserisci il primo valore");
    scanf ("%d", &a);
    fflush (stdin);

    //inserisco la seconda variabile
    printf ("inserisci il secondo valore: ");
    scanf ("%d", &b);
    fflush (stdin);

    //inserisco la terza variabile
    printf ("inserisci il terzo valore: ");
    scanf ("%d", &c);
    fflush (stdin);

    //inserisco la quarta variabile
    printf ("inserisci il quarto valore: ");
    scanf ("%d", &d);
    fflush (stdin);

    //inserisco la quinta variabile
    printf ("inserisci il quinto valore: ");
    scanf ("%d", &e);
    fflush (stdin);

    tot = a + b + c + d + e;


    if (tot > 50) {
        printf("\nil totale ( %d ) e' maggiore di 50", tot);
        printf("\napplicando sconto");
        temp = (tot * 25) / 100;
        tot = tot - sconto;
        printf("il totale con lo sconto applicato e': %d", tot);
    }
    else {
        printf("\nil totale senza sconto e': %d", tot);
    }

}




