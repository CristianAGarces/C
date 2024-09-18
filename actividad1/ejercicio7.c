#include <stdio.h>

int main(){
	int i,tam;
	
	printf("Ingrese los tama&cos de los arreglos:\n",164);
	scanf("%d",&tam);
	int vectorN[tam],vectorM[tam];
	
	printf("\nVector N:\n");
	for(i=0;i<tam;i++){
		printf("Ingrese el valor %d del arreglo en la posicion %d\n",i+1,i+1);
		scanf("%d",&vectorN[i]);
	}
	
	printf("\nVector M:\n");
	for(i=0;i<tam;i++){
		printf("Ingrese el valor %d del arreglo en la posicion %d\n",i+1,i+1);
		scanf("%d",&vectorM[i]);
	}
	
	printf("\nResultado:\n");
	for(i=0;i<tam;i++){
		if(vectorN[i]!=vectorM[i]){
			printf("En la posicion %d son 'DIFERENTES'\n",i+1);
		}else{
			printf("En la posicion %d son 'IGUALES'\n",i+1);
		}
	}
	
	return 0;
}