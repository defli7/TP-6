#include <stdio.h>
void swap(int *a, int *b);

int main() {
	int x1, x2;
	printf("Ingrese x1\n");
	scanf("%d", &x1);
	printf ("Ingrese x2\n");
	scanf("%d", &x2);
	swap (&x1, &x2);
	printf("x1=%d x2=%d",x1, x2);

	return 0;
}
void swap (int *a, int *b){
	int temp= *b;
	*b=*a;
	*a=temp;
}
