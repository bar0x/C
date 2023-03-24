#include <stdio.h>
#include <stdbool.h>

void printMat (int dim, int m[dim][dim]){
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

bool checkBorder(int dim, int m[dim][dim]){
    int num = m[0][0];
    for (int j=0; j<dim; j++){
        for (int i=0; i<dim; i++){
            //verifico condizione prima e ultima colonna
            if (j == 0 || j == 4)
                if (m[i][j] != num)
                    return false;
            
            //verifico condizione delle righe comprese fra la prima e l'ultima (ovviamente escluse)
            if ((0 < i) && (i < 4))
                if (m[0][j] != num || m[4][j] != num)
                    return false;  
        }   
    }
    return true;
}

int main () {
    int dim = 5;
    int m[5][5]= {
        {1, 1, 1, 1, 1},
        {1, 0, 0, 0, 1},
        {1, 0, 0, 0, 1},
        {1, 0, 0, 0, 1},
        {1, 1, 1, 1, 1},
    };
    //stampo a schermo la matrice
    printMat(5, m); 

    //chiamo la funzione
    printf ("\nla funzione ritorna: %d\n", checkBorder(5, m));
    return 0;
}






