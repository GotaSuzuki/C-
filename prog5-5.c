#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];

int main(void){
  printf("***数当てゲーム(レベル1)***\n解答チャンスは4回まで\n1桁の数を入力してください：");
  srand((unsigned)time(0UL));
  int answer = rand() % 10;
  int input;
  String inputStr;

  for(int i=0;i<4;i++){
    scanf("%s", inputStr);
    input = atoi(inputStr);
    if(answer == input){
      printf("当たり!!%d回目の入力でした\n", i+1);
      break;
      //break忘れててエラー出てた
    } else if (answer > input){
      printf("ハズレ!!答えはもっと大きい値");
    } else {
      printf("ハズレ!!答えはもっと小さい値");
    }
  }
  if(answer != input){
    printf("答えは%dでした\n", answer);
  }
  return 0;
}