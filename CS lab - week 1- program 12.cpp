#include<stdio.h>
#include<math.h>

int main(){
	int days;
	float years;
	
	printf("Enter number of days:");
	scanf("%d", &days);
	
	years = days / 365;
	
	printf("The number of years is: %f", years);
	
	return 0;	
}
