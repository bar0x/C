/* Realizzare un programma che grazie alla struttura studente composta da: nome, cognome, anno di nascita, gestisca 
un elenco di massimo 10 studenti garantendo le seguenti funzionalita
x - inserimento nuovo studente,
x - visualizzazione lista studenti,
3 - modifica di uno studente,
4 - cancellazione di uno studente,
5 - ricerca di uno studente (scelto per cognome).
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STUD 10 //num massimo di studenti registrabili;



//-----definizione strutture

typedef struct studente{
    char nome [256];
    char cognome [256];
    int anno_nascita;
};


//-----area prototipi
/**
 * @brief funzione che registra la struct di un nuovo studente.
 * @param struct studente[]: inclusione della struct per il passaggio dei parametri, 
 * @param int: numero di studenti già registrati, 
 * @param int: numero di studenti massimi.
 */
void newStudent(struct studente[], int*, int); //(int) // (int[]) //(int*) int -> struct studente

/**
 * @brief funzione che visualizza gli studenti disponibili
 * @param struct: inclusione della struct per il passagigo dei parametri,
 * @param int: numero di studenti già registrati,
*/
void viewStudent();

/**
 * @brief funzione che modifica i dati GIA ESISTENTI di uno studente.
 * @param struct: inclusione della struct per il passaggio dei parametri, 
 * @param int: numero di studenti già registrati, 
 * @param int: numero di studenti massimi.
 */
void modifyStudent(struct studente[], int*, int, int*);



int main(){
    struct studente max_studenti[MAX_STUD];
    
    int studReg = 0;    //num di studenti registrati AL MOMENTO;
    int scelta;
    int ErrorFx = 0;    //implementazione di un flag errore utilizzabile nella funzione.
    
    do{
        printf ("scegli un'opzione:\n\n");
        printf("1 - inserimento nuovo studente,\n");
        printf("2 - visualizzazione lista studenti,\n");
        printf ("3 - modifica di uno studente,\n");
        printf ("4 - cancellazione di uno studente,\n");
        printf ("5 - ricerca di uno studente (scelto per cognome),\n");
        printf ("6 - esci.\n\n");
        
        printf ("scelta: ");
        scanf ("%d",&scelta);
        printf ("\n");

        switch(scelta){
            case 1:
                newStudent(max_studenti, &studReg, MAX_STUD);
                break;
            case 2:
                viewStudent(max_studenti, &studReg);
                break;
            case 3:
                modifyStudent(max_studenti, &studReg, MAX_STUD, &ErrorFx);
                if (ErrorFx == 1)
                    modifyStudent(max_studenti, &studReg, MAX_STUD, &ErcrorFx);
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                printf("Arrivederci\n");
                break;
            default:
                printf("\nopzione inserita non valida, ripetere la scelta");
                break;
        }
    }while(scelta !=6);
    
    return 0;
}


void newStudent(struct studente _max_studenti[MAX_STUD], int *_studReg, int _MAX_STUD){
    if (*_studReg >= _MAX_STUD)
        printf("numero massimo di studenti raggiunto!");

    else{
        printf("inserisci il nome dello studente:\n");
        scanf("%s", _max_studenti[*_studReg].nome);

        printf("\n\ninserisci il cognome dello studente:\n");
        scanf("%s", _max_studenti[*_studReg].cognome);
        
        printf("\n\ninserisci l'anno di nascita dello studente\n");
        scanf("%d", &_max_studenti[*_studReg].anno_nascita);
        
        printf ("\ninserimento avvenuto con successo!\n");
        //incremento numero di studenti registrati
        (*_studReg)++;
    }
}

void viewStudent(struct studente _max_studenti[MAX_STUD], int *_studReg){
    if (*_studReg == 0)
        printf("non vi e' nessuno studente registrato!\n\n");

    for(int i = 0; i < *_studReg; i++){
        printf ("Studente numero %d: \n", i+1);
        printf ("Nome: %s\n", _max_studenti[i].nome);
        printf ("Cognome: %s\n", _max_studenti[i].cognome);
        printf ("Anno di nascita: %d\n\n", _max_studenti[i].anno_nascita);
    }
}

void modifyStudent(struct studente _max_studenti[MAX_STUD], int *_studReg, int _MAX_STUD, int *_ErrorFx){
    int scelta = 0;


    if (*_studReg == 0){
        printf("non vi e' nessuno studente registrato!\n\n");
        return;
    }

    printf("\nselezionare il numero dello studente da modificare: ");

    printf("\n\n\nstud reg: %d\n\n\n", *_studReg);
    for (int i = 0; i < *_studReg; i++){
        printf("[%d] %s %s, %d \n", i, _max_studenti[i].nome, _max_studenti[i].cognome, _max_studenti[i].anno_nascita);
    }

    printf("\n inserisci il numero dell'utente da modificare: ");
    scanf("%d", &scelta);

    if (scelta == 0 || scelta > *_studReg){
        printf("\nscelta non valida! riprova!\n");
        *_ErrorFx = 1;
        return;
    }



    //fine funzione *_ErrorFx = 0; or error
}