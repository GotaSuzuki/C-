#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef char String[1024];

int main(void){
  const int MONEY = 3000;
  int pocket = MONEY;
  int i = 1;

  printf("りんご：");
  while(pocket >= 120){
    printf("*");
    i++;
    pocket -= 120;
  }
  printf("余りは%d円、合計%d個\n", pocket, i);

  i = 0;
  pocket = MONEY;
  printf("みかん：");
  while(pocket >= 400){
    for(int j=0;j<6;j++){
      printf("*");
    }
    i++;
    pocket -= 400;
  }
  printf("余りは%d円、合計%d個\n", pocket, i*6);

  return 0;

}