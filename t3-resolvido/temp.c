#include <stdio.h>

float temperatura (float);

float temperatura (float f) {
	float c;
	c = 5.0/9.0 * (f - 32.0);
	
	if (c >= -267.0 && c <= -278.0) { 
		printf("(a) Zero Absoluto (-273ºC)\n"); }
	else if (c >= -5.0 && c<= 5.0) {
		printf("(b) Congelamento da Água (0ºC)\n"); }
	     else if (c >= 95.0 && c <= 105.0) {
		printf ("(c) Ebulição da Água (100ºC)\n");}
	
	return c;
}

int main() {
	float f, cel;
	
	printf("Fº = ");	
	scanf("%f", &f);
	printf("\n");
	
	cel = temperatura(f);

	printf("ºC = %.1f\n", cel);

	return 0;
}	
