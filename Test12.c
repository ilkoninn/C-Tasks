#include <stdio.h>

int main (){
	
	int n, a, b, c;
	scanf("%d", &n);
	
	a = n / 100;
	b = n / 10 % 10;
	c = n % 10;
	
	printf("%d%d%d", b, c, a);
	
	return 0;
}