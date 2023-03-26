#include <stdio.h>

int main (){
	
	int n, a, b, d, e, m;
	scanf("%d", &n);
	
	a = n / 10000;
	b = n / 1000 % 10;
	d = n / 10 % 10;
	e = n % 10;
	 
	
	m = (a + b) - (d + e);
	
	printf("%d", m);
	
	
	return 0;
}