/*
Autore: Mattia Baroni;
Data: 28.11.21
Descrizione: scrivi un programma che legge un numero "num" e visualizza sullo schermo tutti i suoi fattori
*/

#include <stdio.h>

int main () {

    int num;
    int contatore;
    int fattore;
    num = 0;
    contatore = 2;
    fattore= 0;

    printf ("inserisci il numero: \n");
    scanf ("%d", &num);
    fflush (stdin);


    while (num > 2) {
        

        printf ("uno dei fattori di %d e': %d \n", num, fattore);
    }

    return (0);
}
