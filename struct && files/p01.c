/* Realizzare un programma che grazie alla struttura studente composta da: nome, cognome, anno di nascita, gestisca 
un elenco di massimo 10 studenti garantendo le seguenti funzionalita
1- inserimento nuovo studente,
2- visualizzazione lista studenti,
3- modifica di uno studente,
4- cancellazione di uno studente,
5- ricerca di uno studente (scelto per cognome).
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
 * @param int studReg: numero di studenti già registrati, 
 * @param int _MAX_STUD: studenti massimi.
 */
void newStudent(struct studente[], int*, int); //(int) // (int[]) //(int*) int -> struct studente



int main(){
    struct studente max_studenti[MAX_STUD];
    
    int studReg = 0;    //num di studenti registrati AL MOMENTO;
    int scelta;

    printf ("scegli un'opzione:\n\n");
    printf("1 - inserimento nuovo studente,\n");
    printf("2 - visualizzazione lista studenti,\n");
    printf ("3 - modifica di uno studente,\n");
    printf ("4 - cancellazione di uno studente,\n");
    printf ("5 - ricerca di uno studente (scelto per cognome),\n");
    printf ("6 - esci.\n\n");
    printf ("scelta: ");

    scanf ("%d",&scelta);

    switch(scelta){
        case 1:
            newStudent(max_studenti, &studReg, MAX_STUD);
            
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            return 0;
        default:
            printf("\nopzione inserita non valida, ripetere la scelta");
            break;
    }
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
        scanf("%s", _max_studenti[*_studReg].anno_nascita);
        

        printf ("\ninserimento avvenuto con successo!");
        //incremento numero di studenti registrati
        *_studReg++;
    }
}

