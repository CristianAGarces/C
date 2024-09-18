#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
	int n_filas, m_col, i, j;
	
	printf("Ingrese el numero de filas de la matriz: ");
	scanf("%d",&n_filas);
	printf("Ingrese el numero de columnas de la matriz: ");
	scanf("%d",&m_col);
	int matrizA[n_filas][m_col], matrizB[n_filas][m_col];
	
	for(i=0;i<n_filas;i++){
		for(j=0;j<m_col;j++){
			printf("MatrizA [%d, %d]: ",i,j);
			scanf("%d",&matrizA[i][j]);
			if(matrizA[i][j]%2==0){
				matrizB[i][j]=pow(matrizA[i][j],2);
			}else{
				matrizB[i][j]=pow(matrizA[i][j],3);
			}
		}
	}
	
	printf("Los elementos de la matriz son: \n");
	for(i=0;i<n_filas;i++){
		for(j=0;j<m_col;j++){
			printf("%d ",matrizA[i][j]);
		}
		printf("\n");
	}
	
	printf("Al cubo o al cuadrado\n");
	for(i=0;i<n_filas;i++){
		for(j=0;j<m_col;j++){
			printf("%d ",matrizB[i][j]);
		}
		printf("\n");
	}
	
	getch();
	return 0;
}