#include <stdio.h>

void PrintLine(){
    for (int i=0; i < 50; i++)
        putchar('-');
}

void CustomLine(int num, char carattere){
    for (int i=0; i < num; i++)
        putchar(carattere);
}


int main () {

    printf("richiamo funzione PrtintLine: \n\n");
    PrintLine();
    printf("\n\n");
    
    printf("Richiamo funzione CustomLine: \n\n");
    CustomLine(10, 'f');
    
 

    return 0;
}
