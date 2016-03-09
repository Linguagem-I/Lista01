/* Escreva um programa que receba a entrada de um número com três dígitos, separe o
número em seus dígitos componentes e os imprima separados uns dos outros por
espaços e por extenso. Por exemplo, se o usuário digitar 423, o programa deve escrever:
4 - quatro, 2 - dois , 3 - três  */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int recebe (){
  int n;
  printf("Digite três digitos:\n");
  scanf("%d", &n);
  return n;
  // printf("Nr: %d\n", n);
}

// funcao para pegar centena
int sc (int n){
  int num;
  num = n / 100;
  return num;
}

// funcao para pegar dezena
int sd (int n){
  int num;
  num = (n % 100) / 10;
  return num;
}

// funcao para pegar unidade
int su (int n){
  int num;
  num = (n % 100) % 10;
  return num;
}

// funcao para imprimir
void print (int n){
  switch (n) {
    case 0: printf("%d - ZERO\n", n); break;
    case 1: printf("%d - UM\n", n); break;
    case 2: printf("%d - DOIS\n", n); break;
    case 3: printf("%d - TRES\n", n); break;
    case 4: printf("%d - QUATRO\n", n); break;
    case 5: printf("%d - CINCO\n", n); break;
    case 6: printf("%d - SEIS\n", n); break;
    case 7: printf("%d - SETE\n", n); break;
    case 8: printf("%d - OITO\n", n); break;
    case 9: printf("%d - NOVE\n", n); break;
  }
}

int main(){
  int c, d, u, n;
  n = recebe();
  c = sc(n);
  d = sd(n);
  u = su(n);

  print(c);
  print(d);
  print(u);

}
