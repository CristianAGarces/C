#include <stdio.h>

int main(){
	int tam, i;
	
	printf("Ingrese el tama%co del arreglo: \n",164);
	scanf("%d",&tam);
	
	int vectorA[tam], vectorB[tam], vectorC[tam];
	
	printf("Vector A:\n");
	for(i=0;i<tam;i++){
		printf("Ingrese el valor %d en la posicion %d \n",i+1,i+1);
		scanf("%d",&vectorA[i]);
	}
	
	printf("Vector B:\n");
	for(i=0;i<tam;i++){
		printf("Ingrese el valor %d en la posicion %d \n",i+1,i+1);
		scanf("%d",&vectorB[i]);
	}
	
	
	printf("resultado VectorA:\n");
	for(i=0;i<tam;i++){
		printf("%d\n",vectorA[i]);
	}
	
	printf("resultado VectorB:\n");
	for(i=0;i<tam;i++){
		printf("%d\n",vectorB[i]);
	}
	
	
	for(i=0;i<tam;i++){
		vectorC[i]=vectorA[i]*vectorB[i];
	}
	
	printf("\nResultado de multiplicar los vector por su posicion");
	for(i=0;i<tam;i++){
		printf("\n%d",vectorC[i]);
	}
	
	
	return 0;
}