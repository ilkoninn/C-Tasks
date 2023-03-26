#include <stdio.h>
#include <math.h>

int main(){
	
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if(c > (a - b) && c < sqrt(a*a + b*b)) printf("Itibucaqli");
	else if(c > sqrt(a*a + b*b) && c < a + b) printf("Korbucaqli");
	else if(c == sqrt(a*a + b*b));
	else printf("This triangle doesn't exist");
	
	
	return 0;
}