#include <stdio.h>

int main(){
	
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	
	int max = x;
	if(max < y) max = y;
	if(max < z) max = z;
	
	
	printf("%d", max);
	
	
	return 0;
}