#include <stdio.h>
#include <math.h>

int main(){
	
	float x, y;
	scanf("%f %f", &x, &y);
	
	if(x != y) printf("%.2f %.2f", x*y*2, (x + y)/2);
	
	
	return 0;
}