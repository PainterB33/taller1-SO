/**************************************
*	Fecha: 27/02/2025
*	Autor: Thomas Arevalo Rodriguez
*	Asignatura: Sistemas Operativos
*	Tema: Taller
*	Pontificia Universidad Javeriana
****************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	if(argc<6){
		printf("Faltan valores de entrada\n");
		printf("\n\n $./ejecutable dato1 dato2 dato3 dato4 dato5");
	}
	int n = (int) atoi(argv[1]); //--> Indica el numero por el quese divide
	int d = (int) atoi(argv[2]);
	int num1 = (double) atof(argv[3]);
	int num2 = (double) atof(argv[4]);
	int num3 = (double) atof(argv[5]);

	printf("\nSe van a sumar 4 numeros y se dividen entre el primer numero entregado, se puede considerar un promedio");
	double res = (d+num1+num2+num3)/n;

	printf("\nResultado de la operacion: %f\n", res);
	return 0;
}
