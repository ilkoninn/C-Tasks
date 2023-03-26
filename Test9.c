#include <stdio.h>

int main (){
	
	int n, a, b;
	scanf("%d", &n);
	
	a = n / 10 % 10;
	b = n % 10;
	
	printf("%d%d", b, a);
	
	
	return 0;
}