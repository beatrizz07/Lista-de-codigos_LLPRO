#include <stdio.h>
#include <locale.h>

//Quest�o 04

int raio_esfera (int raio){
	int v;
	v = 4 / 3 * (raio * raio * raio);
	
	return v;
}

int main () {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int n, r, v, resultado;
	
	printf("\n        QUEST�O 04     \n");
	printf("\nDigite o raio de uma esfera:\n");
	scanf("%d", &n);
	
	resultado = raio_esfera(n);
	
	printf("\nO volume da esfera vai ficar: %d", resultado);
	
	return 0;
}
