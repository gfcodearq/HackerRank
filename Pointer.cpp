#include <stdio.h>

void update(int *a,int *b) 
{
	int suma = *a + *b;
	int resta_absoluta = *a - *b > 0 ? *a - *b : -(*a - *b);
	*a = suma; //le doy un nuevo significado a punteros 
	*b = resta_absoluta;
	
}

int main() {
	int a, b;
	int *pa = &a, *pb = &b;
	
	scanf("%d %d", &a, &b);
	update(pa, pb);
	printf("%d\n%d", a, b);
	
	return 0;
}
