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

// area main
int main () {
    Prodotto p;
    int scelta = 0;

    printf ("scegli un'opzione:\n\n");
    printf("1 - inserisci un nuovo pezzo,\n");
    printf("2 - ricerca cambi per descrizione,\n");
    printf("3 - ricerca cambi per quantita',\n");
    printf("4 - modifica quantita' di un ricambio,\n");
    printf("5 - cancellazione di un ricambio dal catalogo,\n");
    printf("6 - mostrare l'elenco dei ricambi.\n\n");
    printf("7 - mostrare i ricambi prossimi all'esaurimento.\n\n");
    printf("8 - esci.\n\n");
    printf ("scelta: ");
    scanf ("%d",&scelta);

    switch(scelta){
            case 1:
                newProduct(&p);
                saveToFile(_p);
                break;
            case 2:
                char desc;
                printf ("inserisci la descrizione che vuoi cercare: \n");
                gets(desc);
                fflush(stdin);

                break;
            case 3:
                //newStudent(max_studenti, &studReg, MAX_STUD, &ErrorFx);
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                //
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
    FILE *fpOut = fopen(listaProdotti.bin, "a+");
    fwrite(_p, sizeof(Prodotto), 1, fpOut);
    fclose(fpOut);
}

int findByDescription(char _desc){
    int flag;
    FILE *fpOut = fopen(listaProdotti.bin, "rb");
    
     while(!feof(fpIn)){
        
    }


    fwrite(_p, sizeof(Prodotto), 1, fpOut);
    fclose(fpOut);
}

void printList(){
    Prodotto _p;
    FILE *fpIn = fopen(listaprodotti.bin, "r");
    int n;   
    
    while(!feof(fpIn)){
        n = fread(&_p, sizeof(Prodotto), 1, fpIn);
        printf("%d -> ", n);
        if(n > 0)
            printf("%s %s %d %f\n" _p.matricola, _p.descrizione, _p.quantita, _p.prezzo);
    }
    fclose(fpIn);
}