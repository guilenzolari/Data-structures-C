#include <stdio.h>

float avg(float a[], int size) {
  int i;
  float sum;

  sum = 0;
  for (i=0; i < size; i++)
    sum += a[i];
  return (sum/ size);
}

int main(){
  float a[7] = {1, 2, 3, 4, 5, 6, 7};
  float result = avg(a, 7);

  printf("Média = %2f\n", result);

  return 0;
}