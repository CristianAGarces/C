#include <stdio.h>

int main(){
	int tam, num, residuo, cociente;
	printf("Ingrese el tama%co del arreglo\n",164);
	scanf("%d",&tam);
	int vectorA[tam];
	
	for(int i=0;i<tam;i++){
		printf("\nIngrese el valor %d en el arreglo de %d valores\n",i+1,tam);
		scanf("%d",&vectorA[i]);
	}
	
	for(int i=0;i<tam;i++){
		if(vectorA[i-1]<vectorA[i]){
			printf("\nEl vector en el indice '%d' esta ordenado ascendentemente\n",i+1);
		}else if(vectorA[i-1]>vectorA[i]){
			printf("\nEl vector no es ascendente en el indice: %d\n",i+1);
		}
	}
	
	printf("Fin del proceso");
	return 0;
}