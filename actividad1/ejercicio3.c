#include <stdio.h>

int main(){
	int i, tam, numMenor, numMayor, posMenor, posMayor;
	
	printf("Ingrese el tama%co del arreglo:\n",164);
	scanf("\n%d",&tam);
	int vector[tam];
	
	for(i=0;i<tam;i++){
		printf("Ingrese el valor %d en la posicion %d del vector\n",i+1,i+1);
		scanf("%d",&vector[i]);
	}
	
	numMenor=vector[0];
	numMayor=vector[0];
	posMayor=i;
	posMenor=i;
	
	printf("Resultado: \n");	
	for(i=0;i<tam;i++){
		if(vector[i]<numMenor){
			numMenor=vector[i];
			posMenor=i;
		}
	}
	
	for(i=0;i<tam;i++){
		if(vector[i]>numMayor){
			numMayor=vector[i];
			posMayor=i;
		}
	}
	
	printf("El valor menor es %d y se encuentra en la posicion %d\n", numMenor, posMenor);
	printf("El valor mayor es %d y se encuentra en la posicion %d\n", numMayor, posMayor);
	
	return 0;
}