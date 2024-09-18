#include <stdio.h>

int main(){
	//Comentario
	int num1, residuo, cociente;
	printf("Diguite un diguito de 2 cifras, no 1 ni + de 3: ");
	scanf("%d", &num1);
	
	if((num1>9)&&(num1<100)){
		residuo=num1%10;
		cociente=num1/10;
		if(residuo-1==cociente){
			printf("El numero es consecutivo");
		}else{
			printf("El numero no es consecutivo");
		}
	}else{
		printf("Error: numero incorrecto");
	}
	
	return 0;
}