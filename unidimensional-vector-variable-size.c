#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char **lista_de_palavras; // ponteiro que aponta para outro ponteiro
  int esize = sizeof(char *); // cada ponteiro ocupa 8 bytes em sistemas 64 bits
  printf("Tamanho de char pointer: %d bytes\n", esize);

  // Alocando memoria armazenar 3 palavras (3 ponteiros)
  // lista_de_palavras é o ponteiro para o primeiro elemento do vetor
	lista_de_palavras = (char **) malloc(3 * sizeof(char *));
	
  // verifica falha na alocacao de memoria
  if (lista_de_palavras == NULL) {
    return 1;
  }

  // criando um vetor pra armazenar a palavra "algorimo" e "salao"
  lista_de_palavras[0] = (char *) malloc(9 * sizeof(char)); // 8 letras + '\0'
  lista_de_palavras[1] = (char *) malloc(7 * sizeof(char)); // 6 letras + '\0'

  if (lista_de_palavras[0] == NULL || lista_de_palavras[1] == NULL) {
    return 1;
  }
  // copiando a palavra "algorimo" e "salao" para os elementos do vetor
  strcpy(lista_de_palavras[0], "algorimo");
  strcpy(lista_de_palavras[1], "salao");

  //imprimindo as palavras armazenadas
  printf("Palavra 1: %s\n", lista_de_palavras[0]);
  printf("Palavra 2: %s\n", lista_de_palavras[1]);

  //imprimindo os enderecos das palavras armazenadas
  printf("Endereço da palavra1: %p\n", lista_de_palavras[0]);
  printf("Endereço da palavra2: %p\n", lista_de_palavras[1]);

  // Imprimindo onde começa a lista de palavras (mostra o conteúdo da primeira posição do vetor principal)
  printf("Endereço do vetor principal: %p\n", *lista_de_palavras);
  //Imprimindo oque está escrito dentro do pimeiro elemento do vetor principal -> endereço do vetor de vetores
  printf("Endereço do vetor principal: %p\n", lista_de_palavras);


  //agora precisa limpar o vetor princial e os subvetores pra n causar memory leak
  free(lista_de_palavras[0]);  // Liberando a memoria alocada
  free(lista_de_palavras[1]);  // Liberando a memoria alocada
  free(lista_de_palavras);  // Liberando a memoria alocada
  return 0;
}