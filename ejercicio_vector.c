#include <stdio.h>
#include <math.h>

int main(){
	int tam=10,i;
	int vector[tam];
	
	printf("\tVector de 10 elementos\n");
	
	for(i=0;i<tam;i++){
		printf("Ingrese un numero en la posicion %d:\n",i+1);
		scanf("%d",&vector[i]);
	}
	
	for(i=0;i<tam;i++){
		printf("Los numeros del vector son: %d \n",vector[i]);
	}
	
		if(vector[3]%2==1){
			printf("El valor %d en la posicion: %d es impar \n",vector[3],4);
		}else{
			printf("El valor %d en la posicion: %d No es impar \n",vector[3],4);
		}
		if(vector[4]<0){
			printf("El valor %d en la posicion: %d es negativo \n",vector[4],5);
		}else{
			printf("El valor %d en la posicion: %d No es negativo \n",vector[4],5);
		}
		if(vector[7]==0){
			printf("El valor %d en la posicion: %d es 0 \n",vector[7],8);
		}else{
			printf("El valor %d en la posicion: %d No es 0 \n",vector[7],8);
		}
		if(vector[8]%2==0){
			printf("El valor %d en la posicion: %d es par \n",vector[8],9);
		}else{
			printf("El valor %d en la posicion: %d No es par \n",vector[8],9);
		}
	
	return 0;
}