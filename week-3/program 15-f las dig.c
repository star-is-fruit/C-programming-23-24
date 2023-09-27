#include<stdio.h>
#include<math.h>

int main(){
	int n, len, l;
	
	printf("Enter a number: ");
	scanf("%d", &n);

	l = n % 10;
	
	printf("Last digit of number is: %d\n", l);	
	
	while(n >= 10){
		n /= 10;
	}
	
	printf("First digit of number is: %d", n);
	printf("Sum of first and last digits: %d", n + l);
	
	return 0;
}
