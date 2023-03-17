#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 10

typedef struct {  
    char titolo[40];
    int anno;
    int nrPagine;
    float prezzo;
}Libro;


// --------------------AREA PROTOTIPI--------------------

/**
 * Aggiunge uno studente al vettore di elenco.
 * @param Libro[] Vettore di strutture da usare come elenco
 * @param int* Riferimento al contatore delle strutture inserite / celle vettore utilizzate
 * @param int Numero massimo di strutture utilizzabili.
*/
void addStudente(Libro[], int *, int);

/**
 * Scrittura elenco su file binario
 * @param Libro[] Vettore con gli studenti da registrare su file
 * @param int numero di libri da scrivere su file
*/
void scriviSuFile(Libro _l[], int nLib);

/**
 * Visualizza le strutture riempite nell'elenco
 * @param Libro[] Vettore di strutture da usare come elenco.
 * @param int Numero strutture attualmente presenti in elenco / celle utilizzate del vettore.
*/
void showStudenti(Libro[], int);

/**
 * Ricerca uno Libro con l'anno di pubblicazione.
 * @param Libro[] Vettore di strutture da usare come elenco.
 * @param int Anno da cercare.
 * @param int numero studenti attualmente registrati.
*/
void cercaLibro(Libro[], int, int);

void mediaLib(Libro[], int);

// ----------------------AREA MAIN----------------------

int main(){
    Libro l[MAX_ITEMS];
    int cntStudenti = 0;
    int ricercaAnno;
    //inserimento di tre studente:
    addStudente(l, &cntStudenti, MAX_ITEMS);
    scriviSuFile(l, cntStudenti);
    
    addStudente(l, &cntStudenti, MAX_ITEMS);
    scriviSuFile(l, cntStudenti);
    
    addStudente(l, &cntStudenti, MAX_ITEMS);
    scriviSuFile(l, cntStudenti);
    

    //print lista degli studenti salvati:
    showStudenti(l, cntStudenti);

    //ricerca del libro dall'annata:
    printf ("\n\ninserire l'anno di pubblicazione del libro da ricercare: ");
    scanf ("%d", &ricercaAnno);
    fflush (stdin);
    
    cercaLibro(l, ricercaAnno, cntStudenti);
    
    //calcolo media pagine e media prezzo:
    mediaLib(l, cntStudenti);

    return(0);
}

// ---------------------AREA FUNZIONI---------------------


// funzione 1:
void addStudente(Libro _l[], int *_cnt, int _MAX_ITEM){
    if(*_cnt < _MAX_ITEM){
        printf("\n\ntitolo: ");
        scanf("%s", _l[(*_cnt)].titolo);
        fflush(stdin);
        
        printf("Anno: ");
        scanf("%d", &_l[(*_cnt)].anno);
        fflush(stdin);
        
        printf("Numero di pagine: ");
        scanf("%d", &_l[(*_cnt)].nrPagine);
        fflush(stdin);

        printf("Prezzo: ");
        scanf("%f", &(_l[(*_cnt)].prezzo));
        fflush(stdin);

        *_cnt = *_cnt + 1;
    }
    else{
        printf("Errore: numero massimo di utenti inseriti!\n");
    }
}

//funzione 2:
void scriviSuFile(Libro _l[], int nLib){
    FILE *fpOut = fopen("elencoLibri.bin", "wb");
    int i;

    for(i=0; i<nLib; i++){
        fwrite(&_l[i], sizeof(Libro), 1, fpOut);
    }

    fclose(fpOut);
}

//funzione 3:
void showStudenti(Libro _l[], int _cnt){
    int i;
    printf("--ELENCO--\n");
    for(i=0; i<_cnt; i++){
        printf("#%d - %s %d %d %f\n", (i+1), _l[i].titolo, _l[i].anno, _l[i].nrPagine, _l[i].prezzo);
    }
}

// funzione 4:
void cercaLibro(Libro _l[], int val, int nStud){
    int i;

    FILE *fpIn = fopen("elencoLibri.bin", "rb");

    for(i=0; i<nStud; i++){
        fread(&_l[i], sizeof(Libro), 1, fpIn);
        if (_l[i].anno == val)
            printf("\nlibro numero #%d - %s %d %d %f\n", (i+1), _l[i].titolo, _l[i].anno, _l[i].nrPagine, _l[i].prezzo);
    }
    fclose(fpIn);
}

//funzione 5:
void mediaLib(Libro _l[], int nStud){
    int i;
    int mediaPag = 0;
    int mediaPrezzo = 0;

    FILE *fpIn = fopen("elencoLibri.bin", "rb");

    for(i=0; i<nStud; i++){
        fread(&_l[i], sizeof(Libro), 1, fpIn);
        
        //calcolo media delle pagine:
        mediaPag = mediaPag + _l[i].nrPagine;
        //calcolo media delle del prezzo dei libri :
        mediaPrezzo = mediaPrezzo + _l[i].prezzo;
    }
    printf ("\n\nmedia delle pagine dei libri registrati: %d, ", mediaPag = mediaPag / nStud);
    printf ("media del prezzo dei libri registrati: %d \n\n", mediaPrezzo = mediaPrezzo / nStud);
    fclose(fpIn); 
}