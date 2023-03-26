#include <stdio.h>
#include <math.h>

int main(){
	
    int n,count = 1,result = 0;
    printf("Enter a number:\n n = ");
    scanf("%d",&n);

    while(n){
    	if((n%10)%2!=0){
    		result += n % 10 * count;
    		count*=10;
    	}
    	n/=10;
    }
	printf("%d",result);
	return 0;
}