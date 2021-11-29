/*
Autore: Mattia Baroni
Data:21.11.21
scopo: creare un programma stile switch-case che calcoli: 
    quadrato, (input: lato; output: area, perimetro, diagonale),
    cechio, (input: Raggio; Output: area, perimetro),
    triangolo, (Input: C1, C2, C3; Output: area, perimetro),
    rombo, (Input: D, d; Output: Area),
    trapezio. (Input: B, b, h; Output: Area).
*/

#include <stdio.h>
#include <math.h>

int main () {

    int scelta;
    scelta = 0;

    do{
        printf ("\n1. calcolo formule quadrato \n");
        printf ("2. calcolo formule cerchio \n");
        printf ("3. calcolo formule triangolo \n");
        printf ("4. calcolo formule rombo \n");
        printf ("5. calcolo formule trapezio \n");

        printf ("\nscelta: ");
        scanf ("%d", &scelta);
        fflush (stdin);

        switch (scelta) {
            case 1: {
                int lato;
                int perimetro;
                int area;
                int diagonale;
                int temp;

                printf ("inserisci il lato: \n");
                scanf ("%d", &lato);
                fflush (stdin);

                area = lato * lato;
                printf ("l'area del quadrato e': %d", area);

                perimetro = lato * 4;
                printf ("il perimetro del quadrato e': %d", perimetro);

                diagonale = sqrt (lato);
                printf ("la diagonale del quadrato e': %d", diagonale);

                break;
                }
            case 2: {
                int raggio;
                int area;
                int perimetro;

                printf ("inserisci il raggio del cerchio: \n");
                scanf ("%d", &raggio);
                fflush (stdin);

                area = raggio * raggio * 3.14;
                printf ("l'area del cerchio e': %d", area);

                perimetro = raggio * 3.14 * 3.14;
                printf ("il perimetro del cerchio e': %d ", perimetro);

                break;
            }
            case 3: {
                int C1, C2, C3;
                int area, perimetro;

                printf ("inserisci il primo lato: \n");
                scanf ("%d", &C1);
                fflush (stdin);

                printf ("inserisci il secondo lato: \n");
                scanf ("%d", &C2);
                fflush (stdin);

                printf ("inserisci il terzo lato: \n");
                scanf ("%d", &C3);
                fflush (stdin);

                perimetro = C1 + C2 + C3;
                printf ("il perimetro del triangolo e': %d ", perimetro);

                if ((C1 == C2) && (C2 == C3)) {
                    printf ("\n il triangolo è equilatero");
                }
                else if ((C1 == C2) ^ (C2 == C3)) {
                    printf ("il triangolo è isoscele");
                }

                break;
            }
            case 4: {
                int D, d;
                int h;
                int area;

                printf ("inserisci il valore D: \n");
                scanf ("%d", &D);
                fflush (stdin);

                printf ("inserisci il valore d: \n");
                scanf ("%d", &d);
                fflush (stdin);

                h = sqrt ((D * D) - (d * d));
                area = (((D + d) * h) / 2);

                printf("l'area del trapezio e': %d \n", area);
                
                
                
                break;
            }
            case 5: {
                int B, b, h;
                int area;

                printf ("inserisci la base maggiore: \n");
                scanf ("%d", &B);
                fflush (stdin);

                printf ("inserisci la base minore: \n");
                scanf ("%d", &b);
                fflush (stdin);

                printf ("inserisci l'altezza: \n");
                scanf ("%d", &h);
                fflush (stdin);

                
                area = (((B + b) * h) / 2);

                printf ("l'area del trapezio rettangolo e': %d", area);
            }
            default: {
                printf ("codice non valido!");
            }
        }
    
    } while (scelta !=0);
    return (0);
}