#include <stdio.h>
#include <stdbool.h>

//verificare se tutti gli elementi di indice pari di un vettore di interi sono dispari, e tutti quelli di indice dispari sono pari

void printVec (int dim, int v[dim]);
int vetNumbers(int dim, int v[dim]);

int main(){
    int dim = 10;
    int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printVec(dim, v);
    printf("\n\nla funzione chiamata torna: %d", vetNumbers(dim, v));
    return 0;
}


int vetNumbers(int dim, int v[10]){
    for (int i=0; i<10; i++){
        //controllo caselle pari
        if (i % 2 == 0)
            if (v[i] % 2 == 0)
                return false;
        //controllo caselle dispari
        if (i % 2 == 1)
            if (v[i] % 2 == 1)
                return false;
    }
    return true;
}



void printVec(int dim, int v[dim]){
    for (int i=0; i<10; i++){
        printf ("%d ", v[i]);
    }
}

