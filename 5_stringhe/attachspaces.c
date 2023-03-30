#include <stdio.h>
 ("ciao g igi \0")

void attachSpaces(char *c){
    int i = 0;
    int j = 0;

    while(i != '\0'){
        if (c[i] = ' '){
            j = i;
            while(j != '\0'){
                c[j] = c[j + 1];
                j++
            }
        }   
     i++;
    }
}

int main(){
    char c;
    return 0;
}



