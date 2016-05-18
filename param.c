#include <stdio.h>

int main (int argc, char* argv[])
{
	printf("Teste de parâmetros. \n");

	printf("Nosso programa recebeu %i argumentos. \n", argc);
	printf("Nosso programa tem nome %s. \n", argv[0]);
	
	return 0;
}

