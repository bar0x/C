#include <stdio.h>

int main (){
    //variabili case 1:
    float p1,p2,p3,p4,p5,totale,media; 
    //variabili case 2,
    int eta; 
    //variabile switch-case,
    int scelta; 
    printf ("scegli un'opzione: \n\n");
    printf ("1. Totale alla cassa\n");
    printf ("2. Fascia d'età\n");
    printf ("3. Uscita\n");
    printf ("Scelta: \n");
    scanf ("%d",&scelta);
    switch (scelta){
        case 1:{
            //inserimento primo valore:
            printf ("inserisci il primo prezzo: ");
            scanf ("%f",&p1);
            fflush (stdin);
            //inserimento secondo valore:
            printf ("inserisci il secondo prezzo: ");
            scanf ("%f",&p2);
            fflush (stdin);
            //inserimento terzo valore:
            printf ("inserisci il terzo prezzo: ");
            scanf ("%f",&p3);
            fflush (stdin);
            //inserimento quarto valore:
            printf ("inserisci il quarto prezzo: ");
            scanf ("%f",&p4);
            fflush (stdin);
            //inserimento quinto valore:
            printf ("inserisci il quinto prezzo: ");
            scanf ("%f",&p5);
            fflush (stdin);
            //calcolo totale:
            totale = p1 + p2 + p3 + p4 + p5;
            media  = (p1 + p2 + p3 + p4 + p5) / 5;
            //comunico i valori:
            printf ("il totale da pagare sarà di: %f€\n", totale);
            printf ("la media dei prezzi è di: %f€", media);
            break;
            }
        case 2:{
            printf ("inserisci la tua età:\n");
            scanf ("%d",&eta);
            fflush (stdin);
            if ((eta >= 1) && (eta <= 14)) {
                printf ("la tua fascia d'età è: a");
            }
            if ((eta >= 15) && (eta <= 18)) {
                printf ("la tua fascia d'età è: b");
            }
            if ((eta >= 19) && (eta <= 30)) {
                printf ("la tua fascia d'età è: c");
            }
            if (eta >= 31) {
                printf ("la tua fascia d'età è: d");
            }
            break;
        }
        case 3:{
            printf ("fine del programma");
            return (0);
        }
        default: {
            printf ("scelta non valida!");
        }

    }
    return (0);
}