#include <stdio.h>
#include <math.h>

int raiz(float *a, float *b, float *c){
	float raiz=0, x1=0, x2=0;
	
	raiz= (*b)*(*b)-4*(*a)*(*c);
	
	if (raiz >= 0){
		x1 = ((-1*(*b))+ sqrt(raiz))/(2*(*a));
		x2 = ((-1*(*b))- sqrt(raiz))/(2*(*a));
		
		printf ("Las raices son:\n %.2f \n %.2f", x1, x2);
	}
	else if (raiz<0){
		printf ("Error");
	}
}
int main() {
	float a=0, b=0, c=0;
	
	printf ("Ingrese el valor de a: ");
	scanf ("%f", &a);
	
	printf ("Ingrese el valor de b: ");
	scanf ("%f", &b);
	
	printf ("Ingrese el valor de c: ");
	scanf ("%f", &c);
	
	raiz(&a, &b, &c);
	return 0;
}

