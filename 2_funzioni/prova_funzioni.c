/* 
in uno stesso programma realizzare una funzione appropriata per ognuna delle seguenti esigenze :
stampa una linea con 50 hypen '-'
stampa una linea con n caratteri c
stampa un rettangolo di base w, altezza h e carattere c
il main() del programma chiama le varie funzioni pe rtestarle
*/

#include <stdio.h>

void PrintLine(){
    for (int i=0; i < 50; i++)
        putchar('-');
}

void CustomLine(int num, char carattere){
    for (int i=0; i < num; i++)
        putchar(carattere);
}

void PrintRectangle(int w, int h, char c){
    for (int i=0; i < h; i++){
        for (int i2=0; i2 < w; i2++)
            putchar(c);
            printf ("\n");
    }
        
    

}


int main () {

    printf("richiamo funzione PrtintLine: \n\n");
    PrintLine();
    printf("\n\n");


    printf("Richiamo funzione CustomLine: \n\n");
    CustomLine(10, 'f');
    printf("\n\n");


    printf("Richiamo funzione PrintRectangle: \n\n");
    PrintRectangle(5, 5, 'x');
    printf("\n\n");
    return 0;
}
