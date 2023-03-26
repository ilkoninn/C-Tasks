#include <stdio.h>

int main (){
	
	int n, a, b;
	scanf("%d", &n);
	
	a = n / 10;
	b = n % 10;
	
	printf("%d", b*10 + a);
	
	
	return 0;
}