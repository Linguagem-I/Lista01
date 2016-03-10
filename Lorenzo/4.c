#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int soma (int a, int b){
	return a + b;
}

int subtracao (int a, int b){
	return a - b;
}

int multiplicacao (int a, int b){
	return a * b;
}

int divisao (int a, int b){
	return a / b;
}

int quocienteDivisao (int a, int b){
	
	double x = a;
	double y = b;

	printf("%f\n", x);
	printf("%f\n", y);

	return fmod(x,y);
}

int restoDivisao (int a, int b){
	return a % b;
}

int exponenciacao (int a, int b){
	return pow(a,b);
}

int raizAEsima (int a, int b){
	return pow(b, (1/a));
}

int main()
{
	int a, b, resultado; 
	char operacao;

	printf("\nDigite o numero de a:\n");
	scanf("%d", &a);

	printf("\nBigite o numero de b:\n");
	scanf("%d", &b);

	printf("\nEscolha a operacao:\n");

	printf("‘s’ - some os valores de A e B\n");
	printf("‘b’- subtraia os valores de A e B\n");
	printf("‘m’ - multiplique os valores de A e B\n");
	printf("‘d’ - divida os valores de A e B\n");
	printf("‘q’ - calcule o quociente da divisão de A por B\n");
	printf("‘r’ - calcule o resto da divisão de A por B\n");
	printf("‘e’ - calcule o resultado de A elevado a B\n");
	printf("'z’ - calcule o resultado de raiz A-ésima de B, ou seja, B elevado a (1/A)\n");
	__fpurge(stdin);
	scanf("%c", &operacao);

	switch(operacao){
		case 's': resultado = soma(a, b); break;
		case 'b': resultado = subtracao(a, b); break;
		case 'm': resultado = multiplicacao(a, b); break;
		case 'd': resultado = divisao(a, b); break;
		case 'q': resultado = quocienteDivisao(a, b); break;
		case 'r': resultado = restoDivisao(a, b); break;
		case 'e': resultado = exponenciacao(a, b); break;
		case 'z': resultado = raizAEsima(a, b); break;
	}

	printf("\n\nResultado: %d\n", resultado);

	return 0;
}