//esempio di utilizzo del costrutto switch-case:

#include <stdio.h>

int main () {
    int scelta;     // conterrà la scelta numerica effettuata dall'itente
    int base, altezza, area; //variabili per il case 1
    int raggio, circonferenza; //variabili per il case 2
    int numero, divisore; //variabili per il case 3
    int multiplo, numeroo; // variabili per il case 4
    int anno; // variabile per il case 5
    int val1; // variabili per il case 6


    //1. visualizzare all'utente la lista delle scelte:

    printf ("1. calcolo area del rettangolo. \n");
    printf ("2. calcolo lunghezza della circonferenza. \n");
    printf ("3. verifica divisore. \n");
    //da fare:
    printf ("4. verifica multuplo.");
    printf ("5. verifica anno bisestile. \n");
    printf ("6. verifica numero pari e multiplo di 3. \n");
    printf ("scelta: ");
    scanf("%d", &scelta);
    fflush (stdin);

    //2. selezione del blocco da esseguire tramite switch-case:

    switch (scelta) {
        case 1: {
            printf ("inserisci la base: \n");
            scanf ("%d", &base);
            fflush (stdin);

            printf ("inserisci l'altezza: \n");
            scanf ("%d", &altezza);
            fflush (stdin);


            area = base * altezza;

            printf ("l'area è: %d", area);
            break;
        }
        
        
        case 2: {
            printf ("inserisci il raggio: \n");
            scanf ("%d", &raggio);
            fflush (stdin);

            circonferenza = raggio * raggio * 3.14;
            printf ("la lunghezza della circonferenza misura: %d \n", circonferenza);
            break;
        }
        
        
        case 3:{
            printf ("inserisci il numero: \n");
            scanf ("%d", &numero);
            fflush (stdin);

            printf ("inserisci il divisore: \n");
            scanf ("%d", &divisore);
            fflush (stdin);

            if (numero % divisore == 0) {
                printf ("%d è divisore di %d", divisore, numero);

            }
            else {
                printf ("%d non è un divisore di %d", divisore, numero);
            }
            break;
        }  
        
        
        case 4: {
            printf ("inserisci il numero da controllare: \n");
            scanf ("%d", &numeroo);
            fflush (stdin);

            printf ("inserisci il multiplo: \n");
            scanf ("%d", &multiplo);
            fflush (stdin);

            if (numero % multiplo == 0) {
                printf ("il numero %d è multiplo di %d \n", numeroo, multiplo);
            }
            else {
                printf ("il numero %d non è miltiplo di %d \n", numeroo, multiplo);
            }
        }
        

        case 5: {
            printf ("inserisci un anno: \n");
            scanf ("%d", &anno);
            fflush (stdin);

            if (anno % 100 == 0) {
                if (anno % 400 == 0) {
                    printf ("anno bisestile");
                }
                else {
                    printf ("anno non bisestile");
                }
            }
            else {
                printf ("anno non bisestile \n");
            }
        }
        
        
        case 6: {
            printf ("inserisci il numero: \n");
            scanf ("%d", &val1);

            if (val1 % 2 == 0) {
                if ( val1 % 3 == 0) {
                    printf ("%d è pari e multiplo di 3 \n", val1);
                }
                else {
                    printf ("%d è pari ma non è multiplo di 3 \n", val1);
                }
            }
            else {
                printf ("%d non è pari e non è multiplo di 3 \n", val1);
            }
        }
        
        default: {
            printf ("scelta non valida!");
            break;
        }
    }


    return (0);
}

/* utilizzo switch case con gli if:
if (scelta == 1) {
    ramo 1
}

if (scelta == 2) {
    ramo 2
}

if (scelta == 3) {
    ramo 3
}

*/

/* utilizzo switch case con gli if + default
*/


/* 6 con AND

if ((numero % 2 == 0) && (numero % 3 == 0)) {
    printf ("\n %d è pari ed è multiplo di 3", val1);
}
else {
    printf ("\n %d non è pari e multiplo di 3 ", val3;
}