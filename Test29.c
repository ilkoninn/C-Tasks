#include <stdio.h>

int main(){
	
	int n, a, b, c, d;
	scanf("%d", &n);
	
	a = n / 100;
	b = n / 10 % 10;
	c = n % 10;
	
	if(n == (a*a*a + b*b*b + c*c*c)) printf("YES");
	else printf("NO");
	
	
	return 0;
}