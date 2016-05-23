#include <stdio.h>
#include <stdlib.h>
#define SIZE 256

int main(int argc, char* argv[])
{
    int s[SIZE];
    int j;
    int total = 0;

	FILE *arquivo;
	arquivo = fopen(argv[1], "r");

    for( j = 0 ; j < SIZE ; j++ ) {
        s[j] = 0;
    }

    // TODO: ler de arquivo!
    s['A']++;
    s['B']++;
    //

    for( j = 0 ; j < SIZE ; j++ ) {
        total += s[j];
    }

    printf("%8s%13s\n", "Elemento", "Valor");

    for( j = 0 ; j < SIZE ; j++ ) {
        if (s[j] != 0)
            printf("%8d%4c%5x%13d\n", j, j, j, s[j]);
    }

    printf("%8s%13d\n", "Total", total);

	fclose(arquivo);

    return EXIT_SUCCESS;
}


