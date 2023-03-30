/* 
    realizzare un programma con relativa libreria personalizzata che permette di creare un file di testo contenente 
    una serie di parole una sotto l'altra, senza spazi e senza apici. 
    Grazie poi ad una funzione, permette all'utente di ricercare una determianta parola nel file, 
    la parola può essere anche contenuta in una stringa del file
*/

#include <stdio.h>
#include <string.h>
#include "lib.c"
//strcmp

int main (){
    int scelta = 0;

   
    do {
        scelta = sceltaSwitch(); 
        switch(scelta){
            case 1:
                
                break;
            case 2:

                break;
            default:
                printf("\nopzione inserita non valida, ripetere la scelta");
                break;
        }
    }while (scelta != 3);
    return 0;
}