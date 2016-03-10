#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculaDistanciaHorizonte(float h){
	int r;
	float d;

	r = 6378150;
	
	d = sqrt(pow(h,2) + (2 * r * h));

	return d;
}

int main()
{
	
	float h, d;

	scanf("%f", &h);

	d = calculaDistanciaHorizonte(h);

	printf("A Distancia do Horizonte é %f\n", d);

	return 0;
}