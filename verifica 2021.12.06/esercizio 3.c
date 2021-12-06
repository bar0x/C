#include <stdio.h>

int main (){
    int anno,mese,giorno;
    printf ("inserisci l'anno: \n");
    scanf ("%d",&anno);
    fflush (stdin);
    printf ("inserisci il mese: \n");
    scanf ("%d",&mese);
    fflush (stdin);
    printf ("inserisci il giorno: \n");
    scanf ("%d",&giorno);
    fflush (stdin);
    if (anno <= 2021) {
        printf ("Damn! Non ho fatto gli auguri al prof!");
    }
    else {
        if ((mese == 3) && (giorno == 15)) {
            printf("Devo fare gli auguri al prof!");
        }
        else {
            printf("Devo ricordarmi gli auguri al prof!");
        }
    }
    return (0);
}