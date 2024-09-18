#include <stdio.h>

int main(){
	int i, tam, fibo1=0, fibo2=0;
	printf("Ingrese el numero hasta el cual quiere que aparezcan los numeros de fibonacci\n");
	scanf("%d",&tam);
	int vectorFibo[tam];
	printf("\n");
	
	fibo1+=1;
	fibo2+=1;
	
	for(i=0;i<tam;i++){
		vectorFibo[i]=fibo1+fibo2;
		fibo1=i+1;
		fibo2=i+1;
	}
	
	printf("Vector de numero fibonacci hasta el numero fibonacci: %d\n",tam);
	
	for(i=0;i<tam;i++)
		printf("%d ,",vectorFibo[i]);
	
	return 0;
}