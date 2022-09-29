#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mm(int vet[10], int *minimo, int *maximo) {
  // int N = 10;
  int min = vet[0];
  int max = vet[0];
  for (int i = 0; i < 10; i++) {
    if (vet[i] > max) {
      max = vet[i];
    } else if (vet[i] < min) {
      min = vet[i];
    }
  }
  minimo = min;
  maximo = max;
  printf("O menor numero e: %d\n", minimo);
  printf("O maior numero e:%d\n", maximo);
  return;
}

int main() {
  int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *minimo;
  int *maximo;
  mm(vet, minimo, maximo);
}