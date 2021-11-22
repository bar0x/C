# include <stdio.h>

int main () {
    
    int scelta; // valore switch
    int val1, val2, temp;  //valori case 1
    int val3; // val1 e val2 case 2
    int val4, max, min; // val1 , val2 e val3 case 4
    
    printf ("\n 1. scambia due valori se il primo è maggiore del secondo" );
    printf ("\n 2. scrivi 3 numeri e scopri se sono uguali");
    printf ("\n 3. scrivi 3 valori e scopri se compongono una terna pitagorica");
    printf ("\n 4. scrivi 4 numeri e scopri il maggiore e il minore \n");
    scanf ("%d", &scelta);
    
    switch (scelta) {
        case 1: {
            printf ("inserisci il primo valore: \n");
            scanf ("%d", &val1);
            fflush (stdin);

            printf ("inserisci il secondo valore: \n");
            scanf ("%d", &val2);
            fflush (stdin);

            if ( val1 > val2) {
                temp = val1;
                val2 = val1;
                val1 = temp;
                printf ("\n i valori sono stati scambiati");
            }
            else {
                printf(" %d non è maggiore di %d, perciò i dati non sono stati scambiati!", val1, val2);
            }
            break;
        }
        case 2: {
            printf ("inserisci il primo valore: \n");
            scanf ("%d", &val1);
            fflush (stdin);

            printf ("inserisci il secondo valore: \n");
            scanf ("%d", &val2);
            fflush (stdin);

            printf ("inserisci il terzo valore: \n");
            scanf ("%d", &val3);
            fflush (stdin);

            if (val1 == val2) {
                printf ("\n il primo e il secondo valore sono uguali!");
            }
            if (val1 == val3) {
                printf ("\n il primo e il terzo valore sono uguali!");
            }
            if (val2 == val3) {
                printf ("\n il secondo e il terzo valore sono uguali!");
            }
            else {
                printf ("\n nessun valore è uguale!");
            }
            break;

        }
        case 3: {
            printf ("inserisci il primo valore: \n");
            scanf ("%d", &val1);
            fflush (stdin);

            printf ("inserisci il secondo valore: \n");
            scanf ("%d", &val2);
            fflush (stdin);

            printf ("inserisci il terzo valore: \n");
            scanf ("%d", &val3);
            fflush (stdin);

            if ((val1 * val1) + (val2 * val2) == (val3 * val3)) {
                printf ("i tre numeri formano una terna pitagorica!");
            }
            else {
                printf ("i tre numeri NON formano una terna pitagorica!");
            }
            break;
        }
        case 4: {
            printf ("inserisci il primo valore: \n");
            scanf ("%d", &val1);
            fflush (stdin);

            printf ("inserisci il secondo valore: \n");
            scanf ("%d", &val2);
            fflush (stdin);

            printf ("inserisci il terzo valore: \n");
            scanf ("%d", &val3);
            fflush (stdin);

            printf ("inserisci il quarto valore: \n");
            scanf ("%d", &val4);
            fflush (stdin);

            min = val1;
            max = val1;

            if (max < val2) {
                max = val2;
            }
            if (max < val3) {
                max = val3;
            }
            if (max < val4) {
                max = val4;
            }
            if (min > val2) {
                max = val2;
            }
            if (min > val3) {
                max = val3;
            }
            if (min > val4) {
                max = val4;
            }

            printf ("il valore maggiore è : %d \n", max);
            printf ("il valore minore invece è: %d", min);
            
        }
    }
}