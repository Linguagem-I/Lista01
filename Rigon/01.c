/* Se você estiver a uma altura h (em metros) sobre o nível do mar, sua distância d
(também em metros) até o horizonte é dada pela fórmula
onde r é o raio da Terra (cerca de 6378150 metros). Escreva um programa que recebe
uma altura h e determina a que distância está o horizonte. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calculo (int h){
  int r = 6378150;
  float d;
  d = sqrt(pow(h,2) + (2 * r * h));
  return d;
}

int main(){
  float x;
  int h;
  printf("Digite um valor para a altura:");
  scanf("%d", &h);
  x = calculo(h);
  printf("%.2f\n", x);

}
