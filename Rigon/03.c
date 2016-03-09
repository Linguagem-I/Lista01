/* 3. Desenvolva um programa em C que leia a velocidade máxima permitida em uma rua
e a velocidade com que o motorista estava dirigindo nela. Calcule a multa que a pessoa
vai receber, sabendo que são pagos:
 a) 50 reais se o motorista estiver ultrapassar em até 10km/h a velocidade
permitida (ex.: velocidade máxima: 50km/h; motorista a 60km/h ou a 56km/h);
 b) 100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida.
 c) 200 reais, se estiver acima de 31 km/h da velocidade permitida.  */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int vmax (){
  int vmax;
  printf("Digite a velocidade maxima permitida:\n");
  scanf("%d", &vmax);
  return vmax;
}

int vmot (){
  int vmot;
  printf("Digite a velocidade do motorista\n");
  scanf("%d", &vmot);
  return vmot;
}

void imprimeMulta(int max, int mot){
  int limite;
  limite = mot - max;
  printf("vmax %d\n", max);
  printf("vmot %d\n", mot);

  if ( limite <= 10 ){
    printf("Multa R$50\n");
  } else if ( limite >= 11 && limite <= 30){
    printf("Multa R$100\n");
  } else {
    printf("Multa R$200\n");
  }
}

int main(){
  int vma, vmo;
  vma = vmax();
  vmo = vmot();
  imprimeMulta(vma, vmo);
}
