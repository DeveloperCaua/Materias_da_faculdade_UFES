/* Crie um programa em linguagem C que receba três números inteiros, fora de ordem, e os imprima em
ordem crescente. */

#include <stdio.h>

int main(void) {
  int a, b, c;
  printf("Digite três números inteiros aleatórios para que sejam retornados em ordem crescente.\n");
  scanf ("%d %d %d", &a, &b, &c);
  if (a<b && a<c){
     printf ("%d ", a);
    if (b<c)
      printf("%d %d", b, c);
    else
      printf("%d %d", c, b);
  }
  if (b<a && b<c){
    printf ("%d ", b);
    if (a<c)
      printf("%d %d", a, c);
    else
      printf("%d %d", c, a);
  }
  if (c<a && c<b){
    printf ("%d ", c);
    if (a<b)
      printf("%d %d", a, b);
    else
      printf("%d %d", b, a);
  }
  return 0;
}