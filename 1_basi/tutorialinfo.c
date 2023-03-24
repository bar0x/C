#include <stdio.h>

int main () {
    //INTRODUZIONE ALLE VARIABILI

    //sezione dichiarativa
    int a;
    int b;
    int c;

    //sezione assegnativa
    a = 3;
    b = 1;

    //operazioni con le variabili
    //c = a + b;
    c = a - b;
    //c = a * b;
    //c = a / b; //operazione con risultante il quoziente
    //c = a % b; //operazione con risultante il resto


    //eseguone la stampa su schermo
    printf ("l'operazione fra la variabile 'a' e la variabile 'b' risulta: %d ", c);


    //CASTING

    float PiGreco = 3.141592;
    int y;

    y = PiGreco;

    printf ("\n\nla variabile vale: %d", y);


    return 0;
}