#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[]) {
	
	int a;
	long int b;
	char c;
	float d;
	double e;
	
	scanf("%d %ld %c %f %lf",&a,&b,&c,&d,&e);
	printf("%d\n%ld\n%c\n%0.2f\n%0.9lf\n",a,b,c,d,e);

	return 0;
}

