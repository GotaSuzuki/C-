#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef char String[1024];

int main(void){
  String num;
  printf("1-9の数字を入力\n");
  scanf("%s", num);
  int position = atoi(num);
  switch(position){
    case 1:
    case 2:
      printf("バッテリー\n");
      break;
    case 3:
    case 4:
    case 5:
    case 6:
      printf("内野手\n");
      break;
    case 7:
    case 8:
    case 9:
      printf("外野手\n");
      break;
    default:
      printf("入力された守備位置はない\n");
  }
  return 0;
}