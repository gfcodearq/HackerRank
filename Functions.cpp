#include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d,int aux)
{	
	if (a>b && a>c && a>d)
	{
		aux = a;		
	}
	if (b>a && b>c && b>d)
	{
		aux = b;		
	}
	if (c>a && c>b && c>d)
	{
		aux = c;		
	}
	if (d>a && d>b && d>c)
	{
		aux = d;		
	}
	
	return aux;
}


int main() {
	int a, b, c, d,aux;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int ans = max_of_four(a, b, c, d,aux);
	printf("%d", ans);
	
	return 0;
}
