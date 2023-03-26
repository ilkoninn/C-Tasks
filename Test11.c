#include <stdio.h>

int main (){
	
	int n, a, b, c, m;
	scanf("%d", &n);
	
	a = n / 100;
	b = n / 10 % 10;
	c = n % 10;
	
	m = c*100 + b*10 + a;
	
	printf("%d", m);
	
	
	return 0;
}