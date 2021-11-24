// Es 9 pag 186
// Autore: Mattia Baroni
// Data: 14/11/21
//scopo del programma: far inserire all'utente 3 numeri, poi determinare se due o più di questi sono uguali
#include <stdio.h>

int main() {
    int a, b, c;                                
    
    //richiedo parametro 1
    printf("Inserire valore 1: ");              
    scanf("%d", &a );
    
    //richiedo parametro 2
    printf("\nInserire valore 2: ");
    scanf("%d", &b );
    
    //richiedo parametro 2
    printf("\nInserire valore 3: ");
    scanf("%d", &c );

    //scansione validità numeri
    
    //comparo a con b
    if (a == b) {
        printf("\nil primo e il secondo valore che hai inserito sono uguali!");
    }

    
    // comparo a con c
    if (a == c) {
        printf("\nil primo e il terzo valore che hai inserito sono uguali!");
    }
   
    
    // comparo b con c
    if (b == c) {
        printf("\nil secondo e il terzo valore che hai inserito sono uguali!");
    }
    
    return (0);
}
