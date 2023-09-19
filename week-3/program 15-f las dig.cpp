#include<stdio.h>
#include<math.h>

int main(){
	int n, len;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	printf("Last digit of number is: %d\n", (n % 10));	
	
	while(n >= 10){
		n /= 10;
	}
	
	printf("First digit of number is: %d", n);
	
	return 0;
}
