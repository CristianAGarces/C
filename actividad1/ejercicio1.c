#include <stdio.h>

int main(){
	int i, tam, prom, numMayores=0, numMenores=0;
	
	printf("Diguite el tama%co del arreglo: \n",164);
	scanf("%d", &tam);
	int vectorA[tam];
	int vectorB[tam/2], vectorC[tam/2];
	
	for(i=0;i<tam;i++){
		printf("Ingrese el valor %d en la posicion %d \n",i+1,i+1);
		scanf("%d", &vectorA[i]);
	}

	for(i=0;i<tam;i++){
		prom+=vectorA[i];
	}
	
	prom/=tam;
	
	for(i=0;i<tam;i++){
		if(vectorA[i]<prom){
			numMenores+=1;
			vectorB[i]=vectorA[i];
		}
	}
	
	for(i=0;i<tam;i++){
		if(vectorA[i]>prom){
			numMayores+=1;
			vectorC[i]=vectorA[i];
		}
	}
	
	printf("Resultados: \n");
	printf("El valor del promedio es: %d \n", prom);
	printf("Vector valores menores al prom \n");
	printf("El valor de numeros mayores al prom es de %d \n", numMenores);
	for(i=0;i<tam;i++){
		printf("%d ,", vectorB[i]);
	}
	
	printf("\n");
	
	printf("Vector valores mayores al prom \n");
	printf("El valor de numeros mayores al prom es de %d \n", numMayores);
	for(i=0;i<tam;i++){
		printf("%d ,", vectorC[i]);
	}
	
	return 0;
}