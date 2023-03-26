#include <stdio.h>
#include <math.h>

int main(){
	
	float x, y;
	scanf("%f %f", &x, &y);
	
	if(x > y) printf("%.2f", x);
	else printf("%.2f %.2f", x, y);
	
	
	return 0;
}