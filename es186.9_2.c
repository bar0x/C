// es 9 pag 186 

#include <stdio.h>

int main() 
{
  int a, b, c;                                
    
  printf("Inserire valore 1: ");             
  scanf("%d", &a );                           
    
  printf("\nInserire valore 2: ");
  scanf("%d", &b );
    
  printf("\nInserire valore 3: ");
  scanf("%d", &c );

  if (a < b < c) {
    printf("\n0");
  }
  else {
    if ( a > b > c)
    {
      printf("\n1");
    }
    else {
      printf("\n-1");
    }
  }
  return (0);
}






// es 9 pag 186 

#include <stdio.h>

int main() 
{
  int a, b, c;                                
    
  printf("Inserire valore 1: ");             
  scanf("%d", &a );                           
    
  printf("\nInserire valore 2: ");
  scanf("%d", &b );
    
  printf("\nInserire valore 3: ");
  scanf("%d", &c );

  if (a < b < c) {
    printf("\n0");
  }
  
  if ( a > b > c) {
    printf("\n1");
  } 
  else {
      printf("\n-1");
    } 
      
  
  return (0);
}

