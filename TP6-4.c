#include <stdio.h>

float determinante(float matriz[][3]){
	float det;
	det=matriz[0][0]*matriz[1][1]*matriz[2][2]
		+matriz[0][1]*matriz[1][2]*matriz[2][0]
		+matriz[1][0]*matriz[2][1]*matriz[0][2]
		-matriz[0][2]*matriz[1][1]*matriz[2][0]
		-matriz[0][1]*matriz[1][0]*matriz[2][2]
		-matriz[1][2]*matriz[2][1]*matriz[0][0];
	return det;
}

int main() {
	float matriz[3][3];
	int  v=0, a=0;
	float deter;
	for (v=0; v<3; v++){
		for (a=0; a<3; a++){
			printf("Ingrese el valor de la matriz en %d %d \n", v+1, a+1);
			scanf("%f", &matriz[v][a]);
		}
	}
	deter= determinante(matriz);
	printf("El determinante es: %f\n", deter);
	return 0;
}

