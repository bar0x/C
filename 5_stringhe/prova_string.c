#include <stdio.h>
#include <stdlib.h>

#define DIM 10


void initString(char *);
void printNtoZeroR(int);
int maxR(int, int []);



int main(){
    int n = 5;
    char *str;
    str = malloc(sizeof(char)*100);
    //initString(str);
    printNtoZeroR(n);
}

void initString(char *_str){
	printf ("inserisci una stringa: ");
	gets(_str);
	fflush (stdin);
}



//stampa i numeri da n a 0;
void printNtoZeroR(int _n){
    printf("%d",_n);
    if (_n > 0)
        printNtoZeroR(_n - 1);

}  

//il massimo di un array di interi;
int maxR(int dim, int v[dim]){
    int num 
    if (dim == 0)
        return num;
}