#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
void initStringa(): input di una stringa;
int compareString(): compara due stringhe (-1 se str1< str2, 0 se str1 = str2, 1 se str1> str2  a livello alfabetico;
int findDoppie(): ritorna il numero di doppie nella stringa;
*/

//area prototipi
void initStringa(char *);
int compareString(char *, char *);


int main (){
	
	/*
	int a;
	int *pa;
	pa = &a;
	*/

	char *str;
    str = malloc(sizeof(char)*100);
    
    char *str2;
    str2 = malloc(sizeof(char)*100);
    char c;
    
    initStringa(str);
    initStringa(str2);
    printf ("%s", str);
	return (0);
}

// area funzioni

void initStringa(char *_str){
	printf ("inserisci una stringa: ");
	scanf ("%s", _str);
	fflush (stdin);
}

int compareString(char *_str, char *_str2){
	int i=0;
	do{
		printf("ciao");
	} while(_str[i] != '\0' || _str2[i] != '\0');
}
