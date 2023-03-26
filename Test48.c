#include <stdio.h>
#include <math.h>

int main(){
	
	int n, a;
	scanf("%d", &n);
	
	a = (int)sqrt(n + 0.5);
	
	if(a*a == n) printf("YES");
	else printf("NO");	
	
	return 0;
}