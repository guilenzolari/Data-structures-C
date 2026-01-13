#include <stdio.h>
#include <stdlib.h>

int main() {
  int *b;
  int esize = sizeof(int); // cada int ocupa 4 bytes
  printf("Tamanho de int: %d bytes\n", esize);

  // Alocando memoria para 100 enteros
  // b é o ponteiro para o primeiro elemento do vetor
	b = (int *) malloc(100 * sizeof(int));
	
  // verifica falha na alocacao de memoria
  if (b == NULL) {
    return 1;
  }

  //b é o endereco do primeiro elemento do vetor
  //b* é o valor do primeiro elemento do vetor
  *b = 10; //b[1] = 10;
  *(b + 1) = 20; //b[2] = 20;

  printf("Base (b[0]): %d\n", *b);
  printf("b[1]: %d\n", *(b + 0));

  free(b);  // Liberando a memoria alocada
  return 0;
}