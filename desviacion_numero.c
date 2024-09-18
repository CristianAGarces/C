#include <stdio.h>
#include <math.h>

int main (){
	int n, i;
	float suma=0.0, promedio, desviacion, resultado;
	
	printf("Ingrese el numero del tama%co del arreglo \n",164);
	scanf("%d", &n);
	
	float vector[n];
	
	for(i=0;i<n;i++){
		printf("Ingrese el valor del numero en la posicion: \n",i+1);	
		scanf("%f", &vector[i]);
	}
	
	promedio=suma/(float)n;
	
	for(i=0;i<n;i++){
		printf("Vector: %.2f \n",vector[i]);
		suma=vector[i]+promedio;
	}
	
	suma=suma/n-1;
	resultado=sqrt(suma);
	desviacion=resultado;
	
	printf("El resultado de hayar la desviacion es: %d", desviacion);
	
	return 0;
}