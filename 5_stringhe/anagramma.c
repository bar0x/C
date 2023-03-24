#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define DIM 26

/**
 * @brief questa funzione inizializza la stringa con degli zeri.
 * @param char stringa da inizializzare;
 */
void initMatrix(char *);

/**
 * @brief questa funzione prende le lettere di una stringa e le riordina in un'altra secondo lo schema assegnato.
 * @param char stringa da cui prendere le lettere,
 * @param char stringa in cui verranno organizzate le lettere.
 */
void sortWords(char *, char *);
void printStringa(char[]);


int main(){
    char *wrds = "ciao";
    wrds = malloc(sizeof(char)*26);

    char *str1 = "abba";
    str1 = malloc(sizeof(char)*20);

    char *str2;
    str2 = malloc(sizeof(char)*20);
    

    printStringa(wrds);
    initMatrix(wrds);
    printStringa(wrds);

    //sortWords(str1, wrds);
    //printStringa(wrds);
}




void initMatrix(char *_str){
    printf("init");
    int i = 0;
    while (_str[i] != '\0')
        _str[i] = '5';
}


void sortWords(char *_str1, char *_out){
    int i = 0;
    while (_str1[i] != '\0'){
        _out[_str1[i] - 'a'] = _out[_str1[i] - 'a'] + 1;
    } 
}

void printStringa(char _str[]){
    printf("\nprint\n");
    int i;
    i=0;
    while(_str[i] != '\0'){
        printf("%c", _str[i]);
        i++;
    }
}

