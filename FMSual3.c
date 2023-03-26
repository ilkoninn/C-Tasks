#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	
	int l = n, say = 0;
	while(l){
		l /= 10;
		say++;
	}
	
	int a[say], b[say], i;
	for(i = 0; i < say; i++){
		a[i] = n % 10;
		n /= 10;
	}
	
	int max = a[0];
	
	for(i = 0; i < say; i++){
		if(a[i] > max){
			b[i] = a[i];
		}
	}
	
	for(i = 0; i < say; i++){
		cout<<[i]<<" ";
	}
	
	return 0;
}