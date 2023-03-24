#include <stdio.h>


int main() {
    int c1,c2,c3,c4,c5;
    int nc1,nc2,nc3,nc4,nc5;
    nc1 = 4;
    nc2 = 9;
    nc3 = 6;
    nc4 = 7;

    char x1,x2,x3,x4,x5;
    
    //inserimento valori non conosciuti
    printf ("inserisci il primo valore:");
    scanf ("%d",&nc1);
    fflush (stdin);

    printf ("inserisci il secondo valore:");
    scanf ("%d",&nc2);
    fflush (stdin);
    
    printf ("inserisci il terzo valore:");
    scanf ("%d",&nc3);
    fflush (stdin);
    
    printf ("inserisci il quarto valore:");
    scanf ("%d",&nc4);
    fflush (stdin);
    
    printf ("inserisci il quinto valore:");
    scanf ("%d",&nc5);
    fflush (stdin);
    
    //verifica variabile 1
    if (c1 != nc1) {
        printf ("il primo numero e' sbagliato");
        x1 = '-';
    }
    else {
        printf ("il primo numero e' giusto");
        x1 = 'x';
    }

    //verifica variabile 2
    if (c2 != nc2) {
        printf ("il secondo numero e' sbagliato");
        x2 = '-';
    }
    else {
        printf ("il secondo numero e' giusto");
        x2 = 'x';
    }

    //verifica variabile 3
    if (c3 != nc3) {
        printf ("il terzo numero e' sbagliato");
        x3 = '-';
    }
    else {
        printf ("il terzo numero e' giusto");
        x3 = 'x';
    }

    //verifica variabile 4
    if (c4 != nc4) {
        printf ("il quarto numero e' sbagliato");
        x4 = '-';
    }
    else {
        printf ("il quarto numero e' giusto\n");
        x4 = 'x';
    }

    //verifica variabile 5
    if (c5 != nc5) {
        printf ("il quinto numero e' sbagliato\n");
        x5 = '-';
    }
    else {
        printf ("il quinto numero e' giusto\n");
        x5 = 'x';
    }

    //stampa legenda

    printf ("ok! qui sotto verrà stampata la legenda delle parole!\n");
    printf ("%d | %d | %d | %d | %d |",x1,x2,x3,x4,x5);


}