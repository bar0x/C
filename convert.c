#include <stdio.h>

int main () {
    int num;
    int n2;
    int res;
    int i;

    
    printf ("inserisci il numero: ");
    scanf ("%d", &num);
    fflush (stdin);

    n2 = num;

    while (num >0) {
        printf ("%d",num%2);
        num = num/2;
        
    }

    printf ("\n\n");
    int binary [8];
    num=37;
    for (i=0; i<8; i++) {
        binary[i] = num%2;
        num = num / 2;
    }

    for (i=7; i>0; i--){
        printf ("%d", binary[i]);
    }
    
    
    
    return 0;
}