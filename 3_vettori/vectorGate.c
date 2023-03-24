#include <stdio.h>


void vectorGate(int dim, int vec[dim]){
    int num = 0;
    for (int i = 0; i< dim; i++){
        num = vec[i];
        for (int j =0; i < dim; i++){
            if (vec[i] == num)
                break;
            
        }
        printf ("%d", vec[i]);
    }
}


int main (){
    const int dim= 5;
    int vec[5]= {1, 1, 2, 3, 4};
    vectorGate(5,vec);
    return 0;
}


