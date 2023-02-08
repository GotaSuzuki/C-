#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];

int main(void){
  int scores[5] = {88, 61, 90, 75, 93};
  int sum = 0;
  int max = scores[0];
  int min = scores[0];

  for(int i=0;i<5;i++){
    sum += scores[i];
    if(max < scores[i]){
      max = scores[i];
    }
    if(min > scores[i]){
      min = scores[i];
    }
  }

  printf("最高点：%d  最低点：%d  平均点：%.1f", max, min, (double)sum/5);

  return 0;
}