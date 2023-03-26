#include <stdio.h>

int main (){
	
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	
	int max, min;
	max = min = a;
	
	if(b > max) max = b;
	if(b < min) min = b;
	
	printf("%d %d", max, min);
	
	return 0;
}