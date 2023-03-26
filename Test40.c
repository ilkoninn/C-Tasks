#include <stdio.h>
#include <math.h>

int main(){
	
	float x, y;
	scanf("%f %f", &x, &y);
	
	float max, min;
	
	min = max = x;
	if(max < y) max = y;
	if(min > y) min = y;
	
	
	if(x < 0) printf("%.2f", max);
	else printf("%.2f", min);
	
	
	return 0;
}