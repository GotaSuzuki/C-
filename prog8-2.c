#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];

bool isLeapYear(int year){
  return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

int main(void){
  int year = 1982;

  if(isLeapYear(year)){
    printf("%d年は、うるう年です\n", year);
  } else {
    printf("%d年は、うるう年ではありません\n", year);
  }
  return 0;
}
