#include<stdio.h>
#include<math.h>

int main(){
	int n, bin_r = 0, i = 0, bin = 0;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	while(n){
		bin += ((n % 2) * pow(10, i));
		printf("%d", bin);
		n /= 2;
		i++;
		
	}
	
	while(bin_r){
		bin = bin*10 + (bin_r % 10);
		bin_r /= 10;
	}
	printf("The binary number is: %d", bin);
	
	return 0;
}
