/**
Realizzare un algoritmo che gestendo l'input di ipotetici studenti (cognome, nome, anno di nascita) ed un file chiamato classe.bin inserisce gli studenti, 
li visualizza e permette di ricercare uno studente.
L'inserimento degli studenti dovrebbe essere realizzato in modo tale da avere sempre un file con nominativi ordinati per cognome.
**/

#include <stdio.h>
#include <stdbool.h>


typedef struct{
    char nome [15];
    char cognome [15];
    char nascita[5];
}Utente;
//----------------AREA PROTOTIPI---------------

void newUser(Utente*);
void writeOrderedFile(Utente);

int main () {
    Utente u;
    //FILE *classe = fopen("classe.bin","wb");
}


//----------------AREA FUNZIONI---------------

void newUser(Utente *_u){
    printf("Inserisci il nome: ");
    scanf("%s", (*_u).nome);
    fflush(stdin);
    
    printf("Inserisci il cognome: ");
    scanf("%f", &(*_u).cognome);
    fflush(stdin);

    printf("Inserisci l'anno di nascita: ");
    scanf("%d", &(*_u).nascita);
    fflush(stdin);
}

//prova
void findStudent(char _filename[]){
    Utente tmp;
    FILE *classe = fopen(_filename, "rb");
    fread(&tmp, sizeof(Utente),1, classe);
}
void writeFile(Utente _u, char _filename[]){
    FILE *classe = fopen(_filename, "a+");


    fwrite(&_u, sizeof(Utente), 1, classe);
    
    
    fclose(classe);
}

//prof
void writeOrderedFile(Utente _u){
    Studente tmpIn;
    FILE *fpIn, *fpOut;
    int trovato;

    fpIn = fopen ("classe.bin", "r");
    fpOut = fopen ("tmp.bin", "wb");

    if (fpIn != null){
        while(!feof(fpIn)){
            n = fread (&tmpIn, sizeof(Utente), 1, fpIn);
            if (n > 0){
                if (strcmp(tmpIn.cognome, _s.cognome) == -1){
                    fwrite (&tmpIn, sizeof(studente), 1, fpOut);
                }
                else{
                    fwrite (&)
                }
            }
        }
    }
}
