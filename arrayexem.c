#include <stdio.h>
#define SIZE 10

int main()
{
    int s[SIZE];
    int j;
    int total;

    for (j = 0; j < SIZE; j++) {
        s[j] = 2 + 2 * j;
    }

    for (j = 0; j < SIZE; j++) {
        total += s[j];
    }

    printf("%8s%7s\n", "Elemento", "Valor");

    for (j = 0; j < SIZE; j++) {
        printf("%8d %7d\n", j, s[j]);
    }

    printf("%8s%7d\n", "Total", total);

    return 0;
}
