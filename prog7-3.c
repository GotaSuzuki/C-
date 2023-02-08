#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];

int main(void){
  typedef struct {
    int code;
    char character;
  } Ascii;

  Ascii characters[26];

  for (int i=0;i<26;i++){
    characters[i].code = i+65;
    characters[i].character = i+65;
    printf("%d %c\n", characters[i].code, characters[i].character);
  }

  return 0;
}