//es gradazione alcolica

#include <stdio.h>

int main () {
    int gradi;

    printf ("inserire la gradazione dell'alcolico: \n");
    scanf ("%d", &gradi);
    fflush (stdin);

    
    if ( gradi < 40) {
        printf ("superalcolico");
    }
    else if ((20 < gradi) && (gradi <= 40)) {
        printf ("alcolico");
    }
    else if ((15 < gradi) && (gradi <= 20)) {
        printf ("vino liquoroso");
    }
    else if ((12 < gradi) && (gradi <= 15)) {
        printf ("vino forte");
    }
    else if ((10 < gradi) && (gradi <= 12)) {
        printf ("vino normale");
    }
    else if (gradi <= 10.5) {
        printf ("vino leggero");
    }

}