#include<stdio.h>

int main(){
	int n, len;
	
	printf("Enter the number: ");
	scanf("%d", &n);
	
	while(n){
		n /= 10;
		len++;
	}
	
	printf("Length of number= %d", len);
	
	return 0;
}
