#include <stdio.h>
#include <math.h>

int main(){
	int i, tam, ceros, negativos, sumNegativos, positivos, prodPositivos=1;
	
	printf("Ingrese el tama%co del vector\n",164);
	scanf("%d",&tam);
	int vector[tam];
	
	for(i=0;i<tam;i++){
		printf("\nIngrese el valor %d en la posicion %d\n",i+1,i+1);
		scanf("%d",&vector[i]);
	}
	
	for(i=0;i<tam;i++){
		if(vector[i]==0){
			ceros++;
		}else if(vector[i]>0){
			positivos++;
			prodPositivos*=vector[i];
		}else if(vector[i]<0){
			negativos++;
			sumNegativos=vector[i]+sumNegativos;
		}
	}
	
	for(i=0;i<tam;i++){
		printf("Valor %d: %d. ",i+1,vector[i]);
	}
	
	printf("\nLa cantidad de numeros 0 es: %d",ceros);
	printf("\nLa cantidad de numeros positivos es: %d",positivos);
	printf("\nEl producto de los numeros positivos es: %d",prodPositivos);
	printf("\nLa cantidad de numeros negativos es: %d",negativos);
	printf("\nLa suma de los numeros negativos es: %d",sumNegativos);
	
	return 0;
}