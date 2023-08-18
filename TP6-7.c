/*Realizar una función que reciba como argumentos 2 matrices de número reales
	de 3x3 y obtenga el producto de las 2 matrices.*/
#include <stdio.h>
int matrices[3][3];
int producto(float matriz1[3][3], float matriz2[3][3]){
	matrices[0][0]= (matriz1[0][0]*matriz2[0][0]) + (matriz1[0][1]*matriz2[1][0]) + (matriz1[0][2]*matriz2[2][0]);
	matrices[0][1]= (matriz1[0][0]*matriz2[0][1]) + (matriz1[0][1]*matriz2[1][1]) + (matriz1[0][2]*matriz2[2][1]);
	matrices[0][2]= (matriz1[0][0]*matriz2[0][2]) + (matriz1[0][1]*matriz2[1][2]) + (matriz1[0][2]*matriz2[2][2]);
	matrices[1][0]= (matriz1[1][0]*matriz2[0][0]) + (matriz1[1][1]*matriz2[1][0]) + (matriz1[1][2]*matriz2[2][0]);
	matrices[1][1]= (matriz1[1][0]*matriz2[0][1]) + (matriz1[1][1]*matriz2[1][1]) + (matriz1[1][2]*matriz2[2][1]);
	matrices[1][2]= (matriz1[1][0]*matriz2[0][2]) + (matriz1[1][1]*matriz2[1][2]) + (matriz1[1][2]*matriz2[2][2]);
	matrices[2][0]= (matriz1[2][0]*matriz2[0][0]) + (matriz1[2][1]*matriz2[1][0]) + (matriz1[2][2]*matriz2[2][0]);
	matrices[2][1]= (matriz1[2][0]*matriz2[0][1]) + (matriz1[2][1]*matriz2[1][1]) + (matriz1[2][2]*matriz2[2][1]);
	matrices[2][2]= (matriz1[2][0]*matriz2[0][2]) + (matriz1[2][1]*matriz2[1][2]) + (matriz1[2][2]*matriz2[2][2]);

}

int main() {
	float matriz1[3][3];
	float matriz2[3][3];
	int a=0, v=0, d=0, f=0, p=0, g=0;
	for (v=0; v<3; v++){
		for (a=0; a<3; a++){
			printf("Ingrese el valor de la primera matriz en %d %d \n", v+1, a+1);
			scanf("%f", &matriz1[v][a]);
		}
	}
	for (d=0; d<3; d++){
		for (f=0; f<3; f++){
			printf("Ingrese el valor de la segunda matriz en %d %d \n", d+1, f+1);
			scanf("%f", &matriz2[d][f]);
		}
	}
	producto(matriz1, matriz2);
	printf("El producto de las 2 matrices da:\n");
	for (g=0; g<1; g++){
		for (p=0; p<3; p++){
			printf("%d \t", matrices[g][p]);
		}
	}
	printf("\n");
	for (g=1; g<2; g++){
		for (p=0; p<3; p++){
			printf("%d \t", matrices[g][p]);
		}
	}
	printf("\n");
	for (g=2; g<3; g++){
		for (p=0; p<3; p++){
			printf("%d \t", matrices[g][p]);
		}
	}
	//printf("El producto de las 2 matrices da: %f", matrices[3][3]);
	return 0;
}

