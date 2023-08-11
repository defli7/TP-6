#include <stdio.h>
#include <math.h>

float rec2polar(float *a,float *b){
	float r=0, tita=0;
	r= sqrt(pow(*a,2) + pow(*b,2));
	tita= atan(*b/(*a));
	printf ("La forma polar es: %f \n %f", r, tita);
}
float polar2rec(float *r,float *tita){
	float a=0, b=0;
	a=(*r)*cos(*tita);
	b=(*r)*sin(*tita);
	printf ("La forma rectangular es: %f \n %f", a, b);
}
int main(){
char opcion;
float a=0, b=0;
float r=0, tita=0;
printf ("Ingrese el calculo que quiera realizar: \n a)De rectangular a polar \n b)De polar a rectangular\n");
scanf (" %c", &opcion);

if (opcion=='a'){
	printf("Ingrse los valores de a y b");
	scanf ("%f", &a);
	scanf ("%f", &b);
	rec2polar(&a,&b);
}else if(opcion=='b'){
	printf("Ingrse los valores de r y tita");
	scanf ("%f", &r);
	scanf ("%f", &tita);
	polar2rec(&r,&tita);
}
}
