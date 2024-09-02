#include <stdio.h>

int main(void) {

  printf("defina o valor de x:\n");
  int x;
  scanf("%d", &x);

  printf("defina o valor de y:\n");
  int y;
  scanf("%d", &y);

  while(x != 0 || y != 0) {
   if(x > 0 && y > 0) {
  printf("primeiro quadrante\n");
  break;

   if(x < 0 && y > 0) {
  printf("Segundo quadrante\n");
  break;

   if(x < 0 && y < 0) {
  printf("terceiro quadrante\n");
  break;

   if(x > 0 && y < 0) {
  printf("quarto quadrante\n");
  break;


   }
   }
}
  }
  }
  return 0;
  }