/**
Realizzare un programma C che tramite le opportune funzioni, gestisca l'elenco di pezzi di ricambio per un magazzino.
Le funzionalità richieste sono le seguenti:
x Inserimento nuovo ricambio nel catalogo (in modo non ordinato)
- Ricerca ricambi per descrizione.
- Ricerca ricambi per quantita.
- Modifica quantita di un determinato ricambio.
- Cancellazione di un ricambio dal catalogo.
- mostrare l'elenco completo.
-mostrare i ricambi prossimi all'esaurimento (quantita <=5 unità)
Il prodotti sono identificati da (descrizione, matricola(char[5]), quantià, prezzo), il file deve essere nominato "catalogo.bin".
Il programma deve avere un menu operativo (switch-case) per le diverse operazioni.
**/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char matricola[5];
    char descrizione[500];
    int quantita;
    float prezzo;
}Prodotto;

//  area prototipi
void newProduct(Prodotto*);
void saveToFile(Prodotto);
void printList();
int findByDescription(char[]);

// area main
int main () {
    Prodotto p;
    int scelta = 0;
    char desc[20];

    do{
        printf ("scegli un'opzione:\n\n");
        printf("1 - inserisci un nuovo pezzo,\n");
        printf("2 - ricerca cambi per descrizione,\n");
        printf("3 - ricerca cambi per quantita',\n");
        printf("4 - modifica quantita' di un ricambio,\n");
        printf("5 - cancellazione di un ricambio dal catalogo,\n");
        printf("6 - mostrare l'elenco dei ricambi,\n");
        printf("7 - mostrare i ricambi prossimi all'esaurimento,\n\n");
        printf("8 - esci.\n\n");
        printf ("scelta: ");
        scanf ("%d",&scelta);

        switch(scelta){
            case 1:
                newProduct(&p);
                saveToFile(p);
                
                break;
            case 2:
                printf ("inserisci la descrizione che vuoi cercare: \n");
                gets(desc);
                fflush(stdin);
                findByDescription(desc);
                break;
            case 3:
                //newStudent(max_studenti, &studReg, MAX_STUD, &ErrorFx);
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                printList();
                break;
            case 7:
                //
                break;
            case 8:
                printf("Arrivederci\n");
                break;
            default:
                printf("\nopzione inserita non valida, ripetere la scelta");
                break;
        }

    } while (scelta != 8);
    return 0;
}

void newProduct(Prodotto *_p){
    printf("Inserisci la matricola: ");
    scanf("%s", (*_p).matricola);
    fflush(stdin);
    
    printf("\nInserisci la descrizione del prodotto: ");
    gets((*_p).descrizione);
    fflush(stdin);

    printf("\nInserisci la quantita': ");
    scanf("%d", &(*_p).quantita);
    fflush(stdin);

    printf("\nInserisci il prezzo: ");
    scanf("%f", &(*_p).prezzo);
    fflush(stdin);
}

void saveToFile(Prodotto _p){
    FILE *fpOut = fopen("listaProdotti.bin", "a+");
    fwrite(&_p, sizeof(Prodotto), 1, fpOut);
    fclose(fpOut);
}

void printList(){
    Prodotto _p;
    FILE *fpIn = fopen("listaprodotti.bin", "r");
    int n = 1, i = 1;   
    while(!feof(fpIn)){
        n = fread(&_p, sizeof(Prodotto), 1, fpIn); 

        if(n > 0){
            printf("%d -> ", i);
            i++;
            printf("%s %s %d %f\n", _p.matricola, _p.descrizione, _p.quantita, _p.prezzo);
        }               
    }
    fclose(fpIn);
}

int findByDescription(char _desc[]){
    Prodotto _p;
    int tmp;

    FILE *fpIn = fopen("listaProdotti.bin", "rb");
    
     while(!feof(fpIn)){
        tmp = strcmp(_desc, _p.descrizione);
        if (tmp == 0)
            printf("%s %s %d %f\n", _p.matricola, _p.descrizione, _p.quantita, _p.prezzo);
    }
    fclose(fpIn);
}

