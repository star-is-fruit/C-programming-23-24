#include<stdio.h>

int main(){
	int n, f = 0, a = 0, b = 1;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(int i = 1; i < n; i++){
		f = a + b;
		b = a;
		a = f;	
	}
	
	printf("Fibonacci number is: %d", f);
	
		
	return 0;
}

