#include <stdio.h>
#include <stdlib.h>

int numCentena(int n){
	
	int res;
	res = n / 100;

	return res;
}

int numDezena(int n){
	
	int res;
	res = (n % 100) / 10;

	return res;
}

int numUnidade(int n){
	
	int res;
	res = (n % 100) % 10;

	return res;
}


void imprimeNumExtenso(int n){
	switch(n){
		case 0: printf("%d: Zero\n", n);	break;
		case 1: printf("%d: Um\n", n);	break;
		case 2: printf("%d: Dois\n", n);	break;
		case 3: printf("%d: Tres\n", n);	break;
		case 4: printf("%d: Quatro\n", n);	break;
		case 5: printf("%d: Cinco\n", n);	break;
		case 6: printf("%d: Seis\n", n);	break;
		case 7: printf("%d: Sete\n", n);	break;
		case 8: printf("%d: Oito\n", n);	break;
		case 9: printf("%d: Nove\n", n);	break;
	}
}

int main()
{
	int n, c, d, u;

	scanf("%d", &n);

	if (n < 100 || n > 999){
		printf("O Numero nao possui 3 digitos\n");
	} else {

		c = numCentena(n);
		d = numDezena(n);
		u = numUnidade(n);

		imprimeNumExtenso(c);
		imprimeNumExtenso(c);
		imprimeNumExtenso(c);
	}
}