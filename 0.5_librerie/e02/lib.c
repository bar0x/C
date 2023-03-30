//funzioni
#include <stdio.h>
#include <string.h>
#include "lib.h"

int sceltaSwitch(){
    int _s;
    printf ("scegli un'opzione:\n\n");
    printf("1 - inserisci una nuova parola,\n");
    printf("2 - cerca parola nel file,\n");
    printf("3 - esci.\n\n");
    printf ("scelta: ");
    scanf ("%d",&_s);
    return _s;
}

void initParola(){
    char _str[];
    printf ("inserisci la parola da scrivere sul file: ");
    saveToFile(_str);
}

void saveToFile(char str[]){
    FILE *fpOut = fopen("parole.txt", "a+");
    fwrite(str, sizeof(str), 1, fpOut);
    fclose(fpOut);
}