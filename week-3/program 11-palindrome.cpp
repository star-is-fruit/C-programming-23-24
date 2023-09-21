#include<stdio.h>
#include<math.h>

int main(){
	int n, rev;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int m = n;
	
	while(m){
		rev = rev*10 + (m % 10);
		m /= 10;
	}
	
	if(rev == n){
		printf("The given number is a palindrome ");
	}
	else
		printf("The given number is not a palidrome");
		
	return 0;
}
