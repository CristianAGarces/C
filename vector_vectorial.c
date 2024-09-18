#include <stdio.h>
#include <math.h>

int main (){
	int resultadoSuma,suma,mult,tam,i;
	
	printf("\tVectores ortogonales!.\n");
	printf("Ingrese el tama%co de los arreglos: \n",164);
	scanf("%d",&tam);
	 
	int vectorA[tam],vectorB[tam];
	
	for(i=0;i<tam;i++){
		printf("Ingrese el valor de la posicion %d en el vectorA \n" ,i);
		scanf("%d", &vectorA[i]);
	}
	for(i=0;i<tam;i++){
		printf("Ingrese el valor de la posicion %d en el vectorB \n" ,i);
		scanf("%d", &vectorB[i]);
	}
	for(i=0;i<tam;i++){
		mult=vectorA[i]*vectorB[i];
		suma=mult;
		suma=mult+mult;
		
	}
	
	resultadoSuma=suma;
	
	printf("El resultado fue %d \n",resultadoSuma);
	
	if(resultadoSuma==0){
		printf("Los vectores son ortogonales\n");
	}else{
		printf("Los vectores NO son ortogonales\n");
	}
	
	 return 0;
}