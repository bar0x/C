/* Realizzare un programma denominato AltoBasso.c, 
il programma richiede da tastiera gli estremi minimo e massimo tra cui estrarre random un numero N da indovinare, 
successivamente tramite un ciclo richiede all'utente di indovinare il numero inserendolo da tastiera finche non esatto. 
Ad ogni tentativo il programma comunica se il numero da indovinare è più alto o più basso di quello inserito. 
Quando il numero viene indovinato, visualizza il numero di tentativi usati.
*/



#include <stdio.h>

int main () {

    int min,max;
    int num;

    printf("Inserisci il valore minimo: ");
    scanf("%d", &min);
    fflush(stdin);

    printf("Inserisci il valore massimo ");
    scanf("%d", &max);
    fflush(stdin);

    srand(time(NULL));


    num = min + (rand() % (max - min + 1));
    //inizio ciclo
    printf("%d", num);
    
    
    int numTastiera = 0;
    int contatore = 0;
    
    do{
        printf ("che numero pensi che sia? ");
        scanf("%d",&numTastiera);
        


    } while (num = numTastiera)


    
    return 0;
}