#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
	bool p = true;
	
	while(p){
		int n;
		
		printf("Please, Enter your number:\nn = ");
	    scanf("%d", &n);
	    printf("\n");
		
	    int l = n, q;
		
		long long r, S = 0, say = 0, max = -10;
		long long min = 10, H = 1, cut = 0, tek = 0;
		long long cut_say = 0, tek_say = 0, sade_cem = 0, sade_say = 0;
		
		bool prime = true;
		int i, k;
		
		
		while(n){
			r = n % 10;
			
			/*The Number of even numerals*/
			if(r % 2 == 0){
				cut += r;
				cut_say++;
			}
			
			/*The Number of odd numerals*/
			if(r % 2 != 0){
				tek += r;
				tek_say++;
			} 
			
			/*Find the simple numerals*/
			if(r == 0 || r == 1) prime = false;
			
			for(i = 2; i <= r; i++){
				prime =  true;
				
				for(k = 2; k*k <= i; k++){
					if(i % k == 0){
						prime = false;
						break;
					}
				}
			}
			
			if(prime){
				sade_cem += r;
				sade_say++;
			}
			
			/*The Sum of the numerals*/
			S += r;
			
			/*The Product of numerals*/
			H *= r;
			
			/*The Number of numerals*/
			say++;
			
			n /= 10;
		}
		
		while(l){
			q = l % 10;
			
			if(max < q) max = q;
			if(min > q) min = q;
			
			l /= 10;
		}
	
		printf("The Sum of the numerals: %d\n\n", S);
	
    	printf("The Number of numerals: %d\n\n", say);
	
    	printf("The Max Number of numerals: %d\n\n", max);
	
    	printf("The Min Number of numerals: %d\n\n", min);
	
    	printf("The Product of numerals: %d\n\n", H);
	
    	printf("The Sum of even numerals: %d\n\n", cut);
	
    	printf("The Sum of odd numerals: %d\n\n", tek);
	
    	printf("The Number of even numerals: %d\n\n", cut_say);
	
    	printf("The Number of odd numerals: %d\n\n", tek_say);
	
    	printf("The Sum of simple numerals: %d\n\n", sade_cem);
	
    	printf("The Number of simple numerals: %d\n\n", sade_say);
    	
    	
	}
	
	


	
	
	return 0;
}