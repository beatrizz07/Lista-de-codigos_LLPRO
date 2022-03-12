#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Quest�o 06.

float peso_ideal(float altura, int sexo);

int main () {
	setlocale (LC_ALL, "Portuguese_Brazil");

	float alt, pi;
	int sex;

	printf("\n         Quest�o 06      \n");
	printf("\n\\Digite a sua altura:\n");
	scanf("%f", &alt);

	printf("\nInforme seu sexo: 0 para masculino ou 1 para feminino:\n");
	scanf("%d", &sex);

	pi = peso_ideal (alt, sex);
	printf("\n%1.f", pi);
}

float peso_ideal (float altura, int sexo) {

	float peso;

	if (sexo == 0) {
		peso = 72.7 * altura - 58;
	} else if(sexo == 1) {
		peso = 62.1 * altura - 44.7;
	}
	return peso;
}
