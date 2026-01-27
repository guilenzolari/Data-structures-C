#include "operations-with-character-strings.c"

int strpos(char str1[], char str2[]) {
  int len1, len2;
  int i, j1, j2;

  len1 = strlen(str1);
  len2 = strlen(str2);

  // Search for str2 in str1
  for (i = 0; i <= len1 - len2; i++) {
    j1 = i;
    j2 = 0;
    
    while (j2 < len2 && str1[j1] == str2[j2]) {
      j1++;
      j2++;
    }
    
    if (j2 == len2) {
      return i;
    }
  }
  
  return -1;
}