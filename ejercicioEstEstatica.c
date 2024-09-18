#include <stdio.h>

int main() {
    int cantPositivo = 0, suma = 0, numMayor = -9999, multiplos7 = 0, numMenor = 9999, cantNegativo = 0, n = 0;
    float prom;
    printf("Ingrese la cantidad de elementos del vector\n");
    scanf("%d", &n);
    int i, vector[n];
    for (i = 0; i < n; i++) {
        printf("Ingrese el valor de vector[%d]: \n", i);
        scanf("%d", &vector[i]);
        suma += vector[i];
        if (vector[i] >= 0)
            cantPositivo++;
        else
            cantNegativo++;
        if (vector[i] % 7 == 0)
            multiplos7++;
        if (vector[i] > numMayor)
            numMayor = vector[i];
        if (vector[i] < numMenor)
            numMenor = vector[i];
    }
    printf("Los valores almacenados en el vector son: ");
    prom = (float)suma / n;

    for (i = 0; i < n; i++) {
        printf(" %d  |", vector[i]);
    }

    printf("\n\t %d positivos", cantPositivo);
    printf("\n\t\t %d negativos", cantNegativo);
    printf("\n\t\t El numero mayor es %d", numMayor);
    printf("\n\t\t El numero menor es %d", numMenor);
    printf("\n\t\t Hay %d numeros multiplos de 7", multiplos7);

    printf("\nUn valor entero ocupa %d bytes. \n", sizeof(int));
    printf("El vector necesita %d bytes para almacenar los datos\n", sizeof(vector));
    printf("Un valor entero corto ocupa %d bytes \n", sizeof(short int));
    printf("Un valor entero largo ocupa %d bytes \n", sizeof(long int));
    printf("Un valor flotante ocupa %d bytes \n", sizeof(float));
    printf("Un valor flotante doble ocupa %d bytes \n", sizeof(double));

    return 0;
}
