#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
void initStringa(): input di una stringa;
int compareString(): compara due stringhe (-1 se str1< str2, 0 se str1 = str2, 1 se str1> str2  a livello alfabetico;
int findDoppie(): ritorna il numero di doppie nella stringa;
*/

//area prototipi
void initString(char *);
void printString(char *);
int compareString(char *, char *);
void mergeString(char *, char *, char *);
void plitStringAtPosition(char *, int);

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
    
	char *out;
    out = malloc(sizeof(char)*100);
    
	char c;
    
    initString(str);
	initString(str2);

	mergeString(str, str2, out);
	return (0);
}

// area funzioni

void initString(char *_str){
	printf ("inserisci una stringa: ");
	scanf ("%s", _str);
	fflush (stdin);
}

void printString(char *_str){
	printf ("%s\n", _str);
}

void mergeString(char *_str1, char *_str2, char *_out){
	int i = 0;
	do{
		_out[i] = _str1[i];
		i++;
	}while(_str1[i] != '\0');
	
	do{
		_out[i] = _str2[i];
		i++;
	}while(_str2[i] != '\0');
	printf("%s\n", _out);
}

void plitStringAtPosition(char *_str, int pos){
	
}