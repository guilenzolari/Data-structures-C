#include "operations-with-character-strings.c"
#include <stdio.h>
#include <stdlib.h>

char* strconcat(char s1[], char s2[]) {
  int i = strlen(s1);
  int j = strlen(s2);

  char *result = malloc((i + j + 1) * sizeof(char)); 
  //+1 pois é necessário o '\0' no final

  int k = 0;
  
  for (int x=0; s1[x] != '\0'; x++) {
    result[k++] = s1[x]; // isso é o msm que result[k] = s2[x]; k++;
  }

  for (int x = 0; s2[x] != '\0'; x++) {
    result[k++] = s2[x]; // isso é o msm que result[k] = s2[x]; k++;

  }

  result[k] = '\0';
  return result;

}

int main() {
  char *s = strconcat("Olá ", "mundo!");
  printf("%s\n", s);
  free(s);
}

//k++ -> escrita acontece em result[k], só depois k anda para a próxima posição.
//++k -> Aqui o k incrementa antes, e você pula uma posição no array.