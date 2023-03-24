/*
Autore: Mattia Baroni,
Data: 24.11.21,
Consegna: utilizzando il kernel style, svolgere su repl.it l'esercizio sui gradi alcolici p. 199.
*/

#include <stdio.h>

int main () {
    int gradi;
    
    printf ("inserire la graduazione: \n");
    scanf ("%d", &gradi);
    fflush (stdin);

    if (gradi > 40) 
        printf ("\n superalcolico");
    
    
    else if ( 20 < gradi <= 40) 
        printf ("alcolico");

    else if (15 < gradi <= 20)
        printf ("vino liquoroso");
    
    else if (12 < gradi <= 20)
        printf ("vino forte");
    
    else if (10.5 < gradi <= 12)
        printf ("vino normale");
    
    else if (gradi < 10.5)
        printf ("vino leggero");

        
    return (0);
}