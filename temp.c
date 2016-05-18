#include <stdio.h>

float temperatura (float f) {
	float c;
	c = 5.0/9.0 * (f - 32);
	if ( (c >= -267) && ( c <= -278) ) 
		printf("(a) Zero Absoluto (-273 ºC)\n");
	else if ( (c >= - 5) && (c <= 5) ) { 
		printf("(b) Congelamento da Água (0 ºC)\n");
	     else if ((c >= 95) && (c <= 105) ) { 
		printf("(c) Ebulição da Água (100 ºC)\n");}
	     }
	return c;
}

int main (void) {
	float temp;
		
	scanf("%f", &temp);
	temperatura(temp);

	return 0;
}
