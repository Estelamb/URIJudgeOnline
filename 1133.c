#include <stdio.h>

int main(){
  int x, y;
  scanf("%d", &x);
  scanf("%d", &y);

  if(x < y){
    while(x < y){
      if((x%5 == 2) || (x%5 == 3)) printf("%d\n", x);
      x++;
    }
  } else if(x > y){
    while(x > y){
      y++;
      if((y%5 == 2) || (y%5 == 3)) printf("%d\n", y);
    }
  } else if(x == y){
    return 0;
  }
  return 0;
}
