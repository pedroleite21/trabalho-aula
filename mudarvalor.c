#include <stdio.h>

void mudarvalor (float*, float*);

void mudarvalor (float *a, float *b) {
	float aux;
	aux = *a;
	*a = *b;
	*b = aux;
	
	printf("A= %.1f e B= %.1f\n", *a, *b);
}

int main () {
	float a, b;
	
	scanf("%f", &a);
	scanf("%f", &b);

	mudarvalor(&a,&b);

	return 0;
}


