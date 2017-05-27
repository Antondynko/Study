#include <stdio.h>
// проверить 6 и 7 бит в каждом числе битовой операцией
// прочитать от 2 до 2.9
int main(){
  int a = 7;
  int d = 4;
  int h = a & d;
  int f = 2;
  int r = a & f;
  int b = 242;
  int t = b & d;
  int y = b & f;
  printf ("%d\n%d\n%d\n%d\n", h, r, t, y);
}
