#include <stdio.h>

int main(){
	int i, tam, numero;
	printf("Ingrese el tama%co del vector\n",164);
	scanf("%d",&tam);
	int vector[tam];
	
	for(i=0;i<tam;i++){
		printf("\nIngrese el valor del arreglo en la posicion %d:\n",i+1);
		scanf("%d",&vector[i]);
	}
	
	printf("\nIngrese el valor que quiere buscar en el arreglo:\n");
	scanf("%d",&numero);
	i=0;
	
	printf("Numeros del vector\n");
	
	do{
		printf("%d ,",vector[i]);
		i++;
	}while(i<tam);
	
	printf("\n");
	
	for(i=0;i<tam;i++){
		if(numero==vector[i]){
			printf("\nEl indice donde esta el numero esta en la posicion %d del vector.\n",i+1);
		}
	}
	
	
	return 0;
}