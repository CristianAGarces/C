#include <stdio.h>

int main(){
	int i, tam;
	printf("Ingrese el tama%co del vector: \n",164);
	scanf("%d",&tam);
	int vectorA[tam], vectorB[tam];
	
	for(i=0;i<tam;i++){
		printf("Ingrese el valor del vector en la posicion %d\n",i+1);
		scanf("%d",&vectorA[i]);
		printf("\n");
	}
	
	for(i=0;i<tam;i++){
		vectorB[i]=vectorA[tam-1-i];
	}
	
	printf("Vector original: \n");
	for(i=0;i<tam;i++){
		printf("%d, ",vectorA[i]);
	}
	
	printf("\nVector Resultante: \n");
	for(i=0;i<tam;i++){
		printf("%d, ",vectorB[i]);
	}
	
	
	return 0;
}