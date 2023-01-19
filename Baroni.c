#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define DIM 10

//area prototipi

/**
 * Calcola e restituisce la lunghezza di una stringa
 * @param char* Riferimento alla stringa da esaminare.
 * @return int Lunghezza della stringa.
*/
int strLength(char*);

/**
 * inizializza tre stringhe sequenzialmente.
 * @param char* prima stringa,
 * @param char* seconda stringa,
 * @param char* terza stringa.
*/
void initStringa(int, char[], char[], char[]);

void printStringa(char _str1[],char _str2[],char _str3[]);

/**
 * Verifica se una stringa è palindroma oppure no.
 * @param char* Riferimento alla stringa da esaminare.
 * @return int Booleano vero/falso.
*/
int checkPalindroma(char*);

/**
 * Calcola la lunghezza delle singole stringhe, per poi calcolarne la lunghezza media delle tre.
 * @param char* prima stringa,
 * @param char* seconda stringa,
 * @param char* terza stringa.
 * @return int lunghezza media
*/
int lugnhezzaMedia (char[], char[], char[]);

/**
 * chiede in input un carattere, se questo verrà trovato nelle tre stringhe verrà sostituito dallo stesso in versione maiuscola
 * @param char* carattere da sostituire,
 * @param char* prima stringa,
 * @param char* seconda stringa,
 * @param char* terza stringa.
*/
void needItMaiusc(char[], char[], char[]);

/**
 * Verifica se due stringe sono una l'anagramma dell'altra.
 * @param char* Riferimento alla prima stringa.
 * @param char* Riferimento alla seconda stringa.
 * @return int Booleano vero/falso.
*/
int checkAnagramma(char[], char[]);

/**
 * funzione che genera una stringa prendendo un carattere da ognuna delle due stringhe fino ad utilizzarli tutti se str1 e str2 hanno la stessa dimensione, altrimenti genera una stringa formata da str2 e str1 senza spazi.
 * @param char* prima stringa,
 * @param char* seconda stringa,
 * @param char* stringa di output.
*/
void parseString(char[], char[], char[]);




int main(){
    char str1[DIM];
    char str2[DIM];
    char str3[DIM];
    //stringa per l'ultima funzione
    char bonus[DIM];
    
    //funzione 0 
    initStringa(DIM, str1, str2, str3);

    //funzione 1
    if(checkPalindroma(str1))
        printf("la stringa str1 contiene una parola palindroma");
    else
        printf("la stringa str1 NON contiene una parola palindroma");


    //funzione 2
    printf("la lunghezza media delle tre stringhe è: %d caratteri!", lugnhezzaMedia(str1, str2, str3));


    //funzione 3
    needItMaiusc(str1, str2, str3);
    printStringa(str1, str2, str3);


    //funzione 4

        //parsing str1 e str2
    if (checkAnagramma(str1, str2))
        printf("str1 e str2 sono anagrammi!");
    else 
        printf("str1 e str2 NON sono anagrammi!");

        //parsing str1 e str3
    if (checkAnagramma(str1, str3))
        printf("str1 e str3 sono anagrammi!");
    else 
        printf("str1 e str3 NON sono anagrammi!");


    //funzione 5

    parseString(str1, str2, bonus);
    printf ("%s", bonus);

    return 0;
}






//area funzioni


int strLength(char *_st){
    int i;
    i=0;
    while(*(_st+i) != '\0'){
        i++;
    }
    return(i);
}

void initStringa(int _dim, char _str1[],char _str2[],char _str3[]){
    printf("Inserisci stringa 1: ");
    scanf("%s", _str1);
    fflush(stdin);

    printf("Inserisci stringa 2: ");
    scanf("%s", _str2);
    fflush(stdin);

    printf("Inserisci stringa 3: ");
    scanf("%s", _str3);
    fflush(stdin);
}

void printStringa(char _str1[],char _str2[],char _str3[]){
    printf("%s\n", _str1);
    printf("%s\n", _str2);
    printf("%s", _str3);
}

int checkPalindroma(char _st1[]){
    int i;
    int len;

    len = strLength(_st1);
    for(i=0; i<len; i++){
        if(*(_st1+i) != *(_st1+len-i-1))
            return(0);
    }
    return(1);
}

int lugnhezzaMedia (char _str1[],char _str2[],char _str3[]){
    int dim1, dim2, dim3;
    dim1 = strLength(_str1);
    dim2 = strLength(_str2);
    dim3 = strLength(_str3);
    return (((dim1 + dim2 + dim3) /3));
}

void needItMaiusc(char _str1[],char _str2[],char _str3[]){
    int i = 0;
    char _carattere[2];

    printf("che carattere vuoi 'maiuscolare?': ");
    scanf ("%s", _carattere);
    
    // ciclo maiuscolizzatore della prima stringa
    do{
        if (_carattere[0] == _str1[i])
            _str1[i] = _str1[i] - 32;
        i++;
    }while (_str1[i] != '\0');
    i = 0;

    
    // ciclo maiuscolizzatore della seconda stringa
    do{
        if (_carattere[0] == _str2[i])
            _str2[i] = _str2[i] - 32;
        i++;
    }while (_str2[i] != '\0');
    i = 0;
    
    
    // ciclo maiuscolizzatore della terza stringa
    do{
        if (_carattere[0] == _str3[i])
            _str3[i] = _str3[i] - 32;
        i++;
    }while (_str3[i] != '\0');

}

int checkAnagramma(char _st1[], char _st2[]){
    int lettere[26];
    int i;
    int indexLettera;
    int len;
    for(i=0; i<26; i++)
        lettere[i] = 0;
    
    if(strLength(_st1) != strLength(_st2))
        return(0);
    else{
        len = strLength(_st1);
        for(i=0; i<len; i++){                   
            indexLettera = *(_st1+i) - 'a';
            lettere[indexLettera]++;
        }

        for(i=0; i<len; i++){                   
            indexLettera = *(_st2+i) - 'a';
            lettere[indexLettera]--;
        }

        for(i=0; i<26; i++){                    
            if(lettere[i] != 0)
                return(0);                               
        }
        return(1);                              
    }
}

void parseString(char _str1[],char _str2[],char _out[]){
    int i = 0;
    int dim1, dim2;
    dim1 = strLength(_str1);
    dim2 = strLength(_str2);


    if (dim1 == dim2){
        do{
            _out[i] = _str1[i];
            _out[i+1] = _str1[i+1];

            i++;
        }while(_str1[i] != '\0');
    }

    else{
        //"incollamento" prima stringa in out
        do{
            _out[i] = _str1[i];
            i++;
        }while(_str1[i] != '\0');
        
        int j = 0;
        //"incollamento" seconda stringa in out
        do{
            _out[i-1] = _str2[j];
            j++;
        }while(_str2[j] != '\0');
    }
}