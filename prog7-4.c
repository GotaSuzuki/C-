#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];

int main(void){
  srand((unsigned)time(0UL));

  printf("***数当てゲーム(レベル2)***\n");
  printf("3桁の数を当ててください！\n");

  const int TIMES = 3;
  int answer[TIMES];
  int input[TIMES];

  for(int i=0;i<TIMES;i++){
    answer[i] = rand() % 10;
  }

  do{
    int eat = 0;
    int bite = 0;

    for(int j=0;j<TIMES;j++){
      printf("%d桁の目の予想を0~9の数字で入力", j+1);
      String inputStr;
      scanf("%s", inputStr);
      input[j] = atoi(inputStr);
    }

    for(int i=0;i<TIMES;i++){
      if(answer[i] == input[i]){
        eat++;
      }
      for(int j=0;j<TIMES;j++){
        if(input[i] == answer[j] && i!=j){
          bite++;
        }
      }
    }

    printf("%dイート%dバイト\n", eat, bite);
    if(eat == 3){
      printf("正解");
      break;
    } else {
      printf("続ける？(1：続ける  0：終了)");
      String retryStr;
      scanf("%s", retryStr);
      if(atoi(retryStr) == 0){
        printf("正解は%d%d%dでした\n", answer[0], answer[1], answer[2]);
        break;
      }
    }
  }while(true);
  return 0;
}
