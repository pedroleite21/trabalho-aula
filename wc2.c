#include <stdio.h>

int main() {

    FILE *arquivo;
    int c;
    int cl = 0;
    int cb = 0;
    int cp = 0;
    int iniciop = 0;

    arquivo = fopen("fatorial.c", "r");
    c = getc(arquivo);
    while ( c != -1) {
        cb++;
        if (c == '\n')
            cl = cl + 1;
        if ( (c != ' ') && (c !='\n') && (!iniciop) )
            iniciop = 1;
        if ( (c == ' ') || (c == '\n') && (iniciop) ) {
            iniciop = 0;
            cp++;
        }

        printf("%i %c %x\n", c, c, c);
        c = getc(arquivo);
    }

    printf("L=%i, P= %i, B=%i\n", cl, cp - 1, cb);

    fclose(arquivo);


    return 0;
}
