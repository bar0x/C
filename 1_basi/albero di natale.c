#include <stdio.h>

int main () {
    int num;
    int tronco;
    int cont_car;
    int cont_inv;

    printf ("inserisci il numero di colonne: ");
    scanf ("%d", &num);
    fflush (stdin);

    for (cont_inv = 0; cont_inv < num ; cont_inv++) {
        printf ("\n");
        for (cont_car = 0; cont_car < num ; cont_car++) {
            printf ("*");

        }
        
    }
    return (0);
}