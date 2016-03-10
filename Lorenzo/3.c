#include <stdio.h>
#include <stdlib.h>

int calculaMulta(int vMaxima, int vMotorista){

	int multa, limite;

	if (vMotorista > vMaxima){
		
		limite = vMotorista - vMaxima;
		
		if (limite <= 10){
			multa = 50;
		} else if (limite <= 30){
			multa = 100;
		} else {
			multa = 200;
		}

	} else {
		multa = 0;
	}

	return multa;
}

int main(){
	
	int vMaxima, vMotorista, multa;

	printf("\nDigite A velocidade Maxima\n");
	scanf("%d", &vMaxima);

	printf("\nDigite A velocidade do Motorista \n");
	scanf("%d", &vMotorista);

	multa = calculaMulta(vMaxima, vMotorista);

	if (multa > 0){
		printf("A multa foi de %d reais\n", multa);
	} else {
		printf("Nao houve multa!\n");
	}

	return 0;
}