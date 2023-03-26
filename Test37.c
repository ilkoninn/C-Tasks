#include <stdio.h>
#include <math.h>

int main(){
	
	float x, y, z;
	scanf("%f %f %f", &x, &y, &z);
	
	if(x > 1 && x < 3) printf("%.2f\n", x);
	if(y > 1 && y < 3) printf("%.2f\n", y);
	if(z > 1 && z < 3) printf("%.2f", z);

	
	return 0;
}