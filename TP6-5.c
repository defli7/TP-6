#include <stdio.h>
char unir(char cadena1[], char cadena2[], char cadena3[]){
	int i, j, p;
	for (i = 0;i<5; i++){
		cadena3[i] = cadena1[i];
		if (cadena1[i] == 0)	break;
	}
	p = i;
	for (i = p,j = 0;j <= 5; i++, j++){
		cadena3[i] = cadena2[j];
		if (cadena2[j] == 0)	break;
	}
	printf("La cadena unida es: \n %s", cadena3);
}
int main() {
char cadena1[5] = "Hola\0";
char cadena2[5] = "Chau\0";
char cadena3[10];
unir(cadena1, cadena2, cadena3);
	return 0;
}

