//Задание к среде 24.05

#include <stdio.h>
#include <stdlib.h>

void reverse ( char * str )
{
  int len = 0;
  for (int i = 0; str [i] != '\0'; i++){
    len = len + 1;

  }
  for (int i = 0; i < len/2; i++){
    char a = 0;
    a = str [i];
    str [i] = str [len - 1 - i];
    str [len - 1 - i] = a;
  }
}

int main ()
{
  char * str = ( char * ) calloc ( 256, sizeof ( char ) );
  scanf( "%s", str );
  reverse( str );
  printf("%s\n", str);
  return 0;
}
