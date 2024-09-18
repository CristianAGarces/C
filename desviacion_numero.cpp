#include <stdio.h>
#include <math.h>

int main (){
	int n, numeros, i;
	float suma=0.0, promedio, desviacion, resultado;
	
	printf("Ingrese el numero del tamaño del arreglo/n");
	scanf("%d/n",n);
	
	float vector[n];
	
	for(i=0;i<n;i++){
		printf("Ingrese el valor del numero en la posicion: ",i+1);	
		scanf("%f",vector[i]);
	}
	
	promedio=suma/(float)n;
	printf("/nVector: %f",vector[n]);
	
	for(i=0;i<n;i++){
		suma=vector[i]+promedio;
	}
	
	suma=suma/n;
	resultado=sqrt(suma);
	desviacion=resultado;
	
	printf("/n El resultado de hayar la desviacion es: %d", desviacion);
	
	
}