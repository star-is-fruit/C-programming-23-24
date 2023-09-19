#include<stdio.h>

int main(){
	int n, sum;
	
	printf("Enter a number: ")	;
	scanf("%d", &n);
	
	while(n){
		sum += n % 10;
		n /= 10;
	}
	
	printf("Sum of digits = %d", sum);
	
	return 0;
}
