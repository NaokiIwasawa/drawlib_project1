#include <stdio.h>

int main(void) {
  char *str[] = {"aipi", "aiu"};
  char *p1, *p2;
  int r = 0;
	
  p1 = str[0];
  p2 = str[1];

  while (1) {
    if (*p1 == '\0' && *p2 == '\0') {
      r = 0;
      break;
    } else if (*p1 == '\0') {	
      r = -1;
      break;
    } else if (*p2 == '\0') {
      r = 1;
      break;
    }
    p1++;
    p2++;
  }

  printf("RESULT=%d\n", r);

  return 0;
}

/*
  このプログラムはp1,p2で同じタイミングに文字列が終わりヌル文字('\n')
  が見つかるとr=0となり、先にp1が終わるとr=-1、もしくは先にp2が終わるとr=1が
  代入されるようになっている。
*/  
