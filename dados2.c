#include <stdio.h>

int main (void) {
    int a, b, menor, maior, menors = 0;
    char nomearquivo[30];

    FILE *arq;
    printf("Digite o nome do arquivo: \n");
    scanf("%s", nomearquivo);
    
    arq = fopen (nomearquivo, "r");
    
    while ((fscanf(arq, "%i %i", &a, &b)) != EOF) {
        
            if (a >= b) {
                maior = a;
                printf("Maior = %i", a);
                menor = b; }
            else {
                maior = b;
                printf("Maior = %i", b);
                menor = a; }
            menors = menors + menor;

    }
    
    printf("A soma dos menores = %i", menors);
    fclose(arq);
    
    return 0;
}
