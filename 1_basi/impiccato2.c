#include <stdio.h>

int main () {
    int c1,c2,c3,c4,c5;
    int nc1,nc2,nc3,nc4,nc5;
    nc1 = 4;
    nc2 = 9;
    nc3 = 6;
    nc4 = 7;

    char x1,x2,x3,x4,x5;




    //inserimento + check valore 1
    printf ("inserisci il primo numero: ");
    scanf ("%d",&nc1);
    fflush(stdin);

    if (nc1 == c1) {
        printf ("\n complimenti! il primo numero e' stato indovinato!");
        x1 = 'X';
    }
    else{
        printf ("\nil primo numero non e' stato indovinato");
         x1 = '-';
    }

    // inserimento + check valore 2
    if (nc2 == c2) {
        printf ("\n complimenti! il primo numero e' stato indovinato!");
        x2 = 'X';
    }
    else{
        printf ("\nil primo numero non e' stato indovinato");
         x2 = '-';
    }
}