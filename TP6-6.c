/*Realizar una función que reciba como argumentos, una letra y una cadena de 
caracteres y devuelva la cantidad de veces en que aparece esa letra en la cadena.*/

#include <stdio.h>
int contador=0;

char cadena(char letra, char frase[20]){
	for(int i=0; i<20; i++){
		if(letra==frase[i]){
			contador++;
		}
	}
}

int main() {
	char letra;
	char frase[20];
	printf("Ingrese una letra: ");
	scanf(" %s", &letra);
	printf("Ingrese una frase: ");
	scanf(" %s", &frase);
	
	cadena(letra, frase);
	printf("La cantidad de veces que se repite esta letra es: %d", contador);
	//printf(" %s", frase);
	
	return 0;
}

