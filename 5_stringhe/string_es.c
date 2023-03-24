#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define DIM 100

// area prototipi //

void initStringa(char*);
void printStr(char *);
int commizer(char *);
int trovaDoppie(char *);


int main(){
    char *s1;
    char *s2;
    char s3[100];
    s1 = malloc(sizeof(char)*DIM);
    s2 = malloc(sizeof(char)*DIM);
    initStringa(s3);
    printStr(s3);
    //printf ("%d", commizer(s3));
    printf("%d\n",trovaDoppie(s3));
    printStr(s3);
}


// area funzioni //


//funzioni di base

void initStringa(char *_str){
    printf("Inserisci una stringa: ");
    scanf("%s", _str);
}
void printStr(char *_str){
    printf("%s\n", _str);
}
    

//funzioni per esercizio

int commizer(char *_str){  //working
    int i = 0;
    int cnt = 0;
    do{
        if (_str[i] == ' '){ // 32 = ' ' in ascii
            _str[i] = ','; // 44 == ',' in ascii
            cnt++;
        }
        i++;    
    }while (_str[i] != '\0');
    return cnt;
}

//trovaDoppie() Comunica quante doppie sono presenti nella stringa. (otto -> 1 doppia; cassetto -> 2 doppie; xxx -> 2 doppie).
int trovaDoppie(char *_str){
    int i = 0;
    int ndoppie = 0;
    do{
        if (_str[i] == _str[i+1])
            ndoppie++;
        i++;
    }while(_str[i] != '\0');
    
    return ndoppie;
}
