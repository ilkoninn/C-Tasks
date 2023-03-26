#include <stdio.h>

int main (){
	
	int n, a, b;
	scanf("%d", &n);
	
	a = n / 10;
	b = n % 10;
	
	int h = a * b;
    int cem = a + b;
    
    printf("%d %d", cem, h);
	
	return 0;
}