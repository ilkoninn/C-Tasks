#include <stdio.h>
#include <math.h>

int main(){
	
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	if(a < b + c + d && b < a + c + d && c < a + b + d && d < a + b + c) printf("YES");
	else printf("NO");	
	
	return 0;
}