#include <stdio.h>
#include <math.h>

int main(){
	
	float x, y, z;
	scanf("%f %f %f", &x, &y, &z);
	
		
	if(z >= y && y >= x) printf("%.2f %.2f %.2f", x*2, y*2, z*2);
	else printf("%.2f %.2f %.2f", sqrt(x*x), sqrt(y*y), sqrt(z*z));
	
	
	return 0;
}