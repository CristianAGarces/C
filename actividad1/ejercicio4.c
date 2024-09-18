#include <stdio.h>
#include <math.h>

int main(){
	int i, tam;
	
	printf("Ingrese el tama%co del vector\n",164);
	scanf("%d",&tam);
	
	int vectorA[tam];
	float vectorB[tam];
	printf("\n");
	for(i=0;i<tam;i++){
		printf("Ingrese el valor %d en la posicion del vector %d\n",i+1,i+1);
		scanf("%d",&vectorA[i]);
		printf("\n");
	}
	
	for(i=0;i<tam;i++){
		if(vectorA[i]%2==0){
			vectorB[i]=pow(vectorA[i],2);
		}
		if(vectorA[i]%2==1){
			vectorB[i]=pow(vectorA[i],(double)1/3);
		}
	}
	
	printf("Arreglo y arreglo operado:\n");
	for(i=0;i<tam;i++){
		printf("%d,",vectorA[i]);
	}
	printf("\n");
	for(i=0;i<tam;i++){
		printf("%.1f,",vectorB[i]);
	}
	
	return 0;
}