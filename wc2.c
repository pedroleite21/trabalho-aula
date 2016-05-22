#include <stdio.h>

int main() {

    FILE *arquivo; 
    int c; // variável inteira para receber o arquivo
    int cl = 0; // contador de linhas
    int cb = 0; // contador de bytes
    int cp = 0; // contador de palavras
    int iniciop = 0; // demarcar o inicio da palavra
    char nomearquivo [30]; // char para receber o nome do arquivo pela linha de comando
    
    printf("Digite o nome do arquivo: \n"); // conversação com o usuário
    scanf("%s", nomearquivo); // recebe o nome do arquivo
    
    arquivo = fopen(nomearquivo, "r"); // abre o arquivo
    c = getc(arquivo);
    while ( c != -1 //enquanto c não acaba) {
        cb++; // contando os bytes 
        if (c == '\n')
            cl = cl + 1; // contando as linhas
        if ( (c != ' ') && (c !='\n') && (!iniciop) )
            iniciop = 1; // não tem palavras
        if ( (c == ' ') || (c == '\n') && (iniciop) ) {
            iniciop = 0; // iniciou-se a primeira palavras
            cp++; // contando as palavras
        }

        printf("%i %c %x\n", c, c, c); // mostrando o arquivo em inteiro, literal e hexadecimal
        c = getc(arquivo); // 1 reptição e meia
    }

    printf("L=%i, P= %i, B=%i\n", cl, cp - 1, cb); // cp - 1 : contador de palavras conta uma palavra a mais

    fclose(arquivo);


    return 0;
}
