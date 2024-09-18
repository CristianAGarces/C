#include <stdio.h>

int main(){
	int i, tam, num, totalNum;
	printf("Ingrese el tama%co del vector\n",164);
	scanf("%d",&tam);
	int vector[tam];
	
	for(i=0;i<tam;i++){
		printf("\nIngrese el valor %d en el vector\n",i+1);
		scanf("%d",&vector[i]);
	}
	
	printf("Ingrese el numero que desea encontrar en el vector\n");
	scanf("%d",&num);
	
	printf("Los numeros del vector son\n");
	for(i=0;i<tam;i++){
		printf("%d ,",vector[i]);
		if(num==vector[i]){
			totalNum++;
		}
	}
	
	printf("\nEl numero a encontrar es: %d \n",num);
	printf("El numero esta en el vector %d veces\n",totalNum);
	
	
	
	return 0;
}