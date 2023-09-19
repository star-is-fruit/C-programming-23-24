#include<stdio.h>
#include<math.h>

int main(){
	int n, dec = 0, i, j = 0;
	
	printf("Enter a binary: ");
	scanf("%d", &n);
	
	while(n){
		
		i = n % 10;
		
		if(i){
			dec += pow(2, j);
		}
		
		n /= 10;
		
		j++;
		
	}
	
	printf("The decimal number is: %d", dec);
	
	return 0;
}
