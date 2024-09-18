#include <stdio.h>

float main(){
	float C,F;
	
	printf("Diguite un valor de grados farenheit: ");
	scanf("%f", &F);
	
	C=9/5*C-32;
	
	printf("El resultado de conversion de grados farenheit: %.2f a grados centigrados: %.2f",F,C);
	
	return 0;
}