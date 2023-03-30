#include <stdio.h>
#include <stdbool.h>

// area prototipi

void getCharAt(char*, int);
int getStringLength(char*);

int main(){
    char *str;
    // alloco memoria per 100 caratteri e assegno l'indirizzo iniaziale al puntatore str
    str = malloc(sizeof(char)*100);
    char c;

    char *str2;
    str2 = malloc(sizeof(char)*100);

}

 //area funzioni
int getStringLength(char *_str){
    int i;
    i=0;
    while(*(_str+i) != '\0')
        i++;
    return(i);
}

//getCharAt() Ritorna il carattere della stringa alla posizione scelta; -1 se la posizione non esiste.
void getCharAt(string *_str, int pos){
    int lung = getStringLength(&_str);
    if (pos > lung)
        return -1;
    return 
}

//concatenaStringhe() 
void concatenaStringhe (char *_str, char *_str2){
    int l1 = getCharAt(_str1);
    int l2 = getCharAt(_str2);
    int i = l1 + 1;
    _str1[i + 1] = ' ';
    i++;
    int j = 0;
    while (_str2[j] !='\0'){
        str[i] = str[j]
        i++;
        j++; 
    }
}