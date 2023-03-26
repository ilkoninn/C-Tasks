#include <stdio.h>
#include <math.h>

int main(){
	
	int n, a, b, c;
	scanf("%d", &n);
	
	a = n / 100;
	b = n / 10 % 10;
	c = n % 10;
	
	int max, min, orta;
	
	max = min = orta = a;
	if(max < b) max = b;
	if(max < c) max = c;
	if(min > b) min = b;
	if(min > c) min = c;
	if(min < b && b < max) orta = b;
	if(min < c && c < max) orta = c;
	
	printf("%d%d%d", min, orta, max);
 	
	return 0;
}