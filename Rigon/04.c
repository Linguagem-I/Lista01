/* 4. Desenvolva um programa em C com a estrutura de seleção escolha (switch). O
programa deve ler dois valores A e B, calcular e imprimir o resultado da operação
escolhida pelo usuário conforme a lista abaixo (Desenvolver um MENU):

 ‘s’ - some os valores de A e B
 ‘b’- subtraia os valores de A e B
 ‘m’ - multiplique os valores de A e B
 ‘d’ - divida os valores de A e B
 ‘q’ - calcule o quociente da divisão de A por B
 ‘r’ - calcule o resto da divisão de A por B
 ‘e’ - calcule o resultado de A elevado a B
 ‘z’ - calcule o resultado de raiz A-ésima de B, ou seja, B elevado a (1/A)  */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float lerValorA (){
  float valorA;
  printf("Digite o valor de A:\n");
  scanf("%f", &valorA);
  fflush(stdin);
  return valorA;
}

float lerValorB (){
  float valorB;
  printf("Digite o valor de B:\n");
  scanf("%f", &valorB);
  fflush(stdin);
  return valorB;
}

char mostraMenu(){
  char opcao, s, b, m, d, q, r, e, z;
  fflush(stdin);
  printf("SELECIONE UMA OPERACAO:\n");
  printf("‘s’ - some os valores de A e B\n");
  printf("‘b’- subtraia os valores de A e B\n");
  printf("‘m’ - multiplique os valores de A e B\n");
  printf("‘d’ - divida os valores de A e B\n");
  printf("‘q’ - calcule o quociente da divisão de A por B\n");
  printf("‘r’ - calcule o resto da divisão de A por B\n");
  printf("‘e’ - calcule o resultado de A elevado a B\n");
  printf("‘z’ - calcule o resultado de raiz A-ésima de B, ou seja, B elevado a (1/A)\n");
  scanf(" %c", &opcao);
  return opcao;
}

char selecionaOpcao (char opcao, float A, float B){
  printf("Resultado:\n");
  switch ( opcao ) {
    case 's': printf("%f\n", A + B); break;
    case 'b': printf("%f\n", A - B); break;
    case 'm': printf("%f\n", A * B); break;
    case 'd': printf("%f\n", A / B); break;
    case 'q': printf("%f\n", A / B); break;
    case 'r': printf("%d\n", (int)A % (int)B); break;
    case 'e': printf("%f\n", pow(A,B)); break;
    case 'z': printf("%f\n", pow(B,(1/A))); break;
    default: printf("Opcao invalida\n");
    return opcao;
  }
}

int main(){
  char opcao;
  float A, B;
  A = lerValorA();
  B = lerValorB();
  opcao = mostraMenu();
  selecionaOpcao(opcao, A, B);
  return 0;
}
