#include <stdio.h>

int main(){
	
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	
	int min = x;
	if(min > y) min = y;
	if(min > z) min = z;
	
	
	printf("%d", min);
	
	
	return 0;
}