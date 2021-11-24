//lo scopo del programma è quello di chiedere ore minuti e secondi, poi trasformare tutto in secondi ed eseguirne la somma.//


#include <stdio.h>

int main () {
    
    //inserisco le variabili
    int ore ;
    int minuti;
    int secondi;
    int tot;
    //sovrascrivo le variabili
    ore     = 0;
	minuti  = 0;
    secondi = 0;
    tot     = 0;
    //richiedo n.ore
    printf("inserisci il numero di ore:\t");
    scanf ( "%d", &ore);

    //richiedo n.minuti
    printf("inserisci il numero di minuti:\t");
    scanf ( "%d", &minuti);

    //richiedo n.secondi
    printf("inserisci il numero di secondi:\t");
    scanf ( "%d", &secondi);

    //trasformo le variabili in secondi
    ore     = ore * 60 * 60;
    minuti  = minuti * 60;
    tot     = ore + minuti + secondi;

    //stampo il totale
    printf("la somma del'orario inserito e': %d ",tot);
    return (0);
}
