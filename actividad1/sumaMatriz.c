#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	int i, j, n_filas, m_col;
	printf("Ingrese el tama%co de filas: ",164);
	scanf("%d",&n_filas);
	printf("Ingrese el tama%co de columnas: ",164);
	scanf("%d",&m_col);
	int matrizA[n_filas][m_col], matrizB[n_filas][m_col], matrizC[n_filas][m_col];
	
	printf("Num matrizA");
	for(i=0;i<n_filas;i++){
		for(j=0;j<m_col;j++){
			printf("Ingrese el valor en la matrizA[%d, %d]: ",i,j);
			scanf("%d",&matrizA[i][j]);
		}
	}
	printf("\n");
	printf("Num matrizB");
	for(i=0;i<n_filas;i++){
		for(j=0;j<m_col;j++){
			printf("Ingrese el valor en la matrizB[%d, %d]: ",i,j);
			scanf("%d",&matrizB[i][j]);
		}
	}
	printf("\n");
	
	printf("Matriz A:\n");
	for(i=0;i<n_filas;i++){
		for(j=0;j<m_col;j++){
			printf("%d \t",matrizA[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Matriz B:\n");
	for(i=0;i<n_filas;i++){
		for(j=0;j<m_col;j++){
			printf("%d \t",matrizB[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<n_filas;i++){
		for(j=0;j<m_col;j++){
			matrizC[i][j]=matrizA[i][j]+matrizB[i][j];
		}
	}
	printf("\n");
	printf("Matriz C con la suma:\n");
	for(i=0;i<n_filas;i++){
		for(j=0;j<m_col;j++){
			printf("%d \t",matrizC[i][j]);
		}
		printf("\n");
	}
	
	getch();
	return 0;
}