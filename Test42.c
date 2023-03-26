#include <stdio.h>
#include <math.h>

int main(){
	
	float x, y;
	scanf("%f %f", &x, &y);
	
	if(x < 0 && y < 0) printf("%.2f", sqrt(x*x), sqrt(y*y));
	else if(x < 0 || y < 0) printf("%.2f %.2f", x + 0.5, y + 0.5);
	else if((x > 0 && y > 0) && ((x < 0.5 && y > 2.0) || (y < 0.5 && x > 2.0))) printf("%.2f %.2f", x / 10, y / 10);
	else printf("%.2f %.2f", x, y);
	
	
	return 0;
}