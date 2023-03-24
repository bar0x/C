/* 
realizza un programma c che richiede un numero e 
scopre se esso è perfetto (la somma dei divisori è uguale 
al doppio del prodotto)
*/

#include <stdio.h>
#include <conio.h>

int main (){
    int num;
    int sommadiv;
    int divisore;


    printf ("inserisci un numero: ");
    scanf ("%d", &num);
    fflush(stdin);

    //ciclo dei divisori
    sommadiv = 0;
    for (divisore=1; divisore<=num; divisore++){
        if (num%divisore == 0)
            sommadiv = sommadiv + divisore;
    }
    printf ("\nSomma: %d\n", sommadiv);
    if (sommadiv == (num*2)){
        printf ("il numero e' perfetto");
    }
    else{
        printf ("il numero non e' perfetto");
    }

    return 0;
}