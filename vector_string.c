#include <stdio.h>

int main(){
	int tam,i=0;
	printf("Ingresa el tama%co del vector\n",164);
	scanf("%d",&tam);
	char palabras[tam];
	
	for(i=0;i<tam;i++){
		printf("Ingrese la palabra en la posicion: %d\n",i+1);
		scanf("%s",palabras[i]);
		i++;
	}
	
	for(i=0;i<tam;i++){
		printf("Palabra %s \n",palabras[i]);
	}
	
	return 0;
}