#include <stdio.h>
#include <math.h>

int main(){
	
	float x, y, z;
	scanf("%f %f %f", &x, &y, &z);
	
	if(x > 0) printf("%.2f ", x*x);
	else printf("%.2f ", x);
	if(y > 0) printf("%.2f ", y*y);
	else printf("%.2f ", y);
	if(z > 0) printf("%.2f ", z*z);
	else printf("%.2f ", z);

	
	return 0;
}