/* 4. Desenvolva um programa em C com a estrutura de seleÃ§Ã£o escolha (switch). O
programa deve ler dois valores A e B, calcular e imprimir o resultado da operaÃ§Ã£o
escolhida pelo usuÃ¡rio conforme a lista abaixo (Desenvolver um MENU):

 âsâ - some os valores de A e B
 âbâ- subtraia os valores de A e B
 âmâ - multiplique os valores de A e B
 âdâ - divida os valores de A e B
 âqâ - calcule o quociente da divisÃ£o de A por B
 ârâ - calcule o resto da divisÃ£o de A por B
 âeâ - calcule o resultado de A elevado a B
 âzâ - calcule o resultado de raiz A-Ã©sima de B, ou seja, B elevado a (1/A)  */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float A, B;

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

int mostraMenu(){
        char opcao[50];
        printf("SELECIONE UMA OPERACAO:\n");
        printf("âsâ - some os valores de A e B\n");
        printf("âbâ- subtraia os valores de A e B\n");
        printf("âmâ - multiplique os valores de A e B\n");
        printf("âdâ - divida os valores de A e B\n");
        printf("âqâ - calcule o quociente da divisÃ£o de A por B\n");
        printf("ârâ - calcule o resto da divisÃ£o de A por B\n");
        printf("âeâ - calcule o resultado de A elevado a B\n");
        printf("âzâ - calcule o resultado de raiz A-Ã©sima de B, ou seja, B elevado a (1/A)\n");
        scanf("%s", opcao);
        printf("DEBUG: OPCAO %s\n", opcao);
        selecionaOpcao(opcao, A, B);
}

int selecionaOpcao (char *opcao){
        printf("Resultado:\n");
        if(strcmp(opcao, "s") == 0)
                printf("%f\n", A + B);
        else if(strcmp(opcao, "b") == 0)
                printf("%f\n", A - B);
        else if(strcmp(opcao, "m") == 0)
                printf("%f\n", A * B);
        else if(strcmp(opcao, "d") == 0)
                printf("%f\n", A / B);
        else if(strcmp(opcao, "q") == 0)
                printf("%f\n", fmod(A,B));
        else if(strcmp(opcao, "r") == 0)
                printf("%d\n", (int)A % (int)B);
        else if(strcmp(opcao, "e") == 0)
                printf("%f\n", pow(A,B));
        else if(strcmp(opcao, "z") == 0)
                printf("%f\n", pow(A,(1/A)));
        else
                printf("Opcao invalida\n");
}

int main(){
  A = lerValorA();
  B = lerValorB();
  mostraMenu();
  return 0;
}
