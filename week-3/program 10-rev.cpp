#include<stdio.h>

int main(){
	int n, len, rev = 0;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int m = n;
	
	while(n){
		rev = rev*10 + (n % 10);
		n /= 10;
	}
	
	printf("Reversed number is: %d", rev);
	
	return 0;
}
