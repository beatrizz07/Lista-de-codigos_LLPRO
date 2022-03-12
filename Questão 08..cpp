#include <stdio.h>
#include <locale.h>

int fatorial (int vlr) {
	int fatorial = 1;
	for (int n = vlr; n > 1; n--) {
		fatorial = fatorial * n;
	}
	
	return fatorial;
}

int main () {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int valor, numero, resultado;
	
	printf("\n       QUESTÃO 08     \n");
	printf("\nDigite qualquer número para mostrar seu fatorial:\n");
	scanf("%d", &numero);
	
	resultado = fatorial(numero);
	printf("\nO valor final: %d", resultado);
}
