#include <stdio.h>

void printNtoZeroRbert(int);
void printNtoZeroRsoff(int);
void printNtoZeroRbott(int);


int main(void) {
  printNtoZeroRbert(7);
  return 0;
}


void printNtoZeroRbert(int n) {
  printf("%d ", n);
  if (0 < n)
    printNtoZeroRbert(n - 1);
}

void printNtoZeroRsoff(int n) {
  if (0 <= n) {
    printf("%d ", n);
    printNtoZeroRsoff(n - 1);
  }
}

void printNtoZeroRbott(int n) {
  if (0 == n)
    printf("%d ", n);
  else {
    printf("%d ", n);
    printNtoZeroRbott(n - 1);
  }
}