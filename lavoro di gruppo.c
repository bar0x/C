#include <stdio.h>

int main () {
    //INTRODUZIONE ALLA VARIABILI

    //spiego la sezione dichiarativa
    int a;
    int b;
    int c;

    //parte assegnativa
    a = 3;
    b = 1;

    //operazioni con le variabili
    c = a + b;
    //c = a - b;
    //c = a * b;
    //c = a / b; operazione con risultante il quoziente
    //c = a % b; operazione con risultante il resto


    //eseguo il calcolo e lo stampo su schermo
    printf ("la somma della variabile 'a' e della variabile 'b' è: %d ", c);


    //CASTING

    float x = 3.141592;
    int y;

    y = x;

    printf ("\n\nla variabile x vale: %d", y);

    return 0;
}
