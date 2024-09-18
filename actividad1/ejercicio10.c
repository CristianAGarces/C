#include <stdio.h>

int main(){
	int i, n;
	
	printf("Ingrese el tama%co de los vectores\n",164);
	scanf("%d",&n);
	
	int vectorA[n], vectorB[n], vectorC[n];
	
	for(i=0;i<n;i++){
		printf("\nIngrese el valor %d en el vectorA\n",i+1);
		scanf("%d",&vectorA[i]);
	}
	
	for(i=0;i<n;i++){
		printf("\nIngrese el valor %d en el vectorB\n",i+1);
		scanf("%d",&vectorB[i]);
	}
	
	int tam=n;
	
	for(i=0;i<n;i++){
		vectorC[i]=vectorA[i]*vectorB[tam-=1];
	}                               

	printf("\n");
	
	for(i=0;i<n;i++)
		printf("%d, ",vectorA[i]);
		
	
	printf("\n");
	
	for(i=0;i<n;i++)
		printf("%d, ",vectorB[i]);
	
	printf("\nResultado de la multiplicacion de los vectores es:\n");
	for(i=0;i<n;i++)
		printf("%d, ",vectorC[i]);
	
	return 0;
}