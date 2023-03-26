#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int main(){
	bool p = true;
	
	while(p){
		long long n, k = 1;
	    printf("\nPlease, Enter your number:\nn = ");
	    scanf("%d", &n);
	
	    int c=0, l=n, i, j;
	    while(l){
     		c++;
    		l/=10;
    	}
    	
	    int *m = malloc(c);
	
	    for(i = 0; i < c; i++){
	    	m[i] = n % 10;
    		n /= 10;
    	}
	
    	// m[0] = 1, m[1] = 2, m[2] = 3 ...
	
    	for(i = 0; i < c; i++){
    		for(j = i + 1; j < c; j++){
    			if(m[i] == m[j]){
			    	k++;
     			}
    		}	
    	}
	
    	// m[0] == m[1], m[1] == m[2], m[2] == m[3] ... , k = 1, 2, 3 ...
	
    	if(k > 1){
    		printf("Yes");
    	}
    	else{
    		printf("No");
    	}
	
	
    	free(m);
	}
	
	
	return 0;
}