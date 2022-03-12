#include <stdlib.h>
#include <locale.h>

//Questão 05.

void valor_numerico();

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	valor_numerico();
}

void valor_numerico() {
	int numero;
	
	printf("\n\n       Questão 05       \n");
	printf("\n\nDigite um número:");
	scanf("%d", &numero);
	
	if(numero < 0) {
		printf("\nNumero negativo!\n");
	}
	else{
		printf("\nNumero positivo!\n");	
	}
}
