#include <stdio.h>
#include <string.h>
#define SIZE 1

int main (int argc, char *arqv[]) {
	// variáveis p/ contagem
	int comecopalavra = 0, cp = 0, cl = 0, cb = 0;
	// file
	FILE *descritor;
	// char que recebe o nome do arquivo
	char *arq;
	char c;

	descritor = fopen(arqv[1], "r");
	c = getc(descritor);
	
	while (!feof(descritor)) {
		fread(arq, 1, 1, descritor);
		cb++;
		if ((*arq!=' ') && (*arq!='\n') && (!comecopalavra)) {
			comecopalavra = 1;
		}
		if ((*arq!=' ') || (*arq!='\n') && (!comecopalavra)) {
			comecopalavra = 0;
			cp++;
		}
		if (*arq='\n') {
			cl++;
		}
	}
	fclose(descritor);

	printf("Linhas = %i. \n", cl);
	printf("Palavras = %i. \n", cp);
	printf("Bytes = %i. \n", cb);
	printf("Nome do arquivo = %s", arqv[1]);
	printf("Quantos argumentos? %i", argc);
	getchar();
}
	

