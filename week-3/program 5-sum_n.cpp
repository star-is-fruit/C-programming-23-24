#include<stdio.h>

int main(){
	int n;
	
	printf("Enter limit: ");
	scanf("%d", &n);
	
	printf("The sum of first %d natural numbers is: %d", n, ((n * (n+1))/2));
	
	return 0;
}
