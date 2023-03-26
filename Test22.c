#include <stdio.h>

int main (){
	
	int n, a, b, c, d, e;
	scanf("%d", &n);
	
	a = n / 10000;
	b = n / 1000 % 10;
	c = n / 100 % 10;
	d = n / 10 % 10;
	e = n % 10;
	
		
	if(e > d && d > c && c > b && b > a) printf("YES");
	else printf("NO");
	
	
	return 0;
}