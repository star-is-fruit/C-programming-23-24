#include<stdio.h>

int main(){
	int a, b;
	
	printf("Enter the two numbers:");
	scanf("%d %d", &a, &b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("The two numbers are: %d and %d", a, b)	;
	
	return 0;
}
