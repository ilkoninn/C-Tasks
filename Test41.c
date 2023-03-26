#include <stdio.h>

int main(){
	
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	int max;
	max = a;
	if(max < b) max = b;
	if(max < c) max = c;
	if(max < d) max = d;
	
	if(a >= b && b >= c && c >= d){
		a = max;
		b = max;
		c = max;
		d = max;
		printf("%d %d %d %d", a, b, c, d);
	}
	else if(d > c && c > b && b > a){
		printf("%d %d %d %d", a, b, c, d);
	}
	else{
		printf("%d %d %d %d", a*a, b*b, c*c, d*d);
	}
	
	
	
	return 0;
}