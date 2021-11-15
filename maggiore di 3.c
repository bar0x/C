/*
Auth: Mattia Baroni
Date: 15.11.21
File: p02.c
Description: realizzare un programma che richiede l'inserimento di 3 numeri interi e determina e comunica il valore maggiore inserito.
*/
#include <stdio.h>

int main () {
    int a, b, c;
    
    //inserisco il 1 valore:
    printf ("inserisci il primo valore: ");
    scanf ("%d", &a);
    fflush(stdin);
    
    //inserisco il 2 valore:
    printf ("inserisci il secondo valore: ");
    scanf ("%d", &b);a
    fflush(stdin);
    
    //inserisco il 3 valore:
    printf ("inserisci il secondo valore: ");
    scanf ("%d", &c);
    fflush(stdin);
    
   // determinazione valore maggiore:
   
   if (a > b) {
       if (a > c) {
           printf("il maggiore è %d", a);
       }
   }
  
  
  
  
   if (b > a ) {
       if (b > c) {
           printf("il maggiore è %d", b);
       }
    
    
   
   
    if (c > a) {
        if (c > b) {
            printf("il maggiore è %d", c);
        }
    }
   }
    
    return (0);
    
}





//////////////////////////////////////
sol 02




/*
Auth: Mattia Baroni
Date: 15.11.21
File: p02.c
Description: realizzare un programma che richiede l'inserimento di 3 numeri interi e determina e comunica il valore maggiore inserito.
*/
#include <stdio.h>

int main () {
    int a, b, c;
    int max;
    
    //inserisco il 1 valore:
    printf ("inserisci il primo valore: ");
    scanf ("%d", &a);
    fflush(stdin);
    
    //inserisco il 2 valore:
    printf ("inserisci il secondo valore: ");
    scanf ("%d", &b);
    fflush(stdin);
    
    //inserisco il 3 valore:
    printf ("inserisci il secondo valore: ");
    scanf ("%d", &c);
    fflush(stdin);
    
   // determinazione valore maggiore:
   
    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    printf("il valore maggiore e' : %d", max);
    return (0);
    
}



///////////////////////////////////////////
sol 3
/*
Auth: Mattia Baroni
Date: 15.11.21
File: p02.c
Description: realizzare un programma che richiede l'inserimento di 3 numeri interi e determina e comunica il valore maggiore inserito.
*/
#include <stdio.h>

int main () {
    int a, b, c;
    int max;
    
    //inserisco il 1 valore:
    printf ("inserisci il primo valore: ");
    scanf ("%d", &a);
    fflush(stdin);
    
    //inserisco il 2 valore:
    printf ("inserisci il secondo valore: ");
    scanf ("%d", &b);
    fflush(stdin);
    
    //inserisco il 3 valore:
    printf ("inserisci il terzo valore: ");
    scanf ("%d", &c);
    fflush(stdin);
    
   // determinazione valore maggiore:
   
    if ((a > b) && (a > c)) {
        printf ("il valore maggiore e': %d", a);
        
    }
    if ((b > a) && (b > c)) {
        printf ("il valore maggiore e': %d", b);
    }
    
     if ((c > a) && (c > a)) {
        printf ("il valore maggiore e': %d", c);
        
    }
    return (0);
    
}






