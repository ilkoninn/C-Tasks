#include <stdio.h>
#include <math.h>

int main(){
	
	float x, y;
	scanf("%f %f", &x, &y);
	
	if(x < y || x == y) printf("0.00 %.2f", y);
	else printf("%.2f %.2f", x, y);
	
	
	return 0;
}