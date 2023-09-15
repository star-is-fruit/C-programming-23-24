#include<stdio.h>
#include<math.h>

int main(){
	float x, sqt;
	
	printf("Enter a number:");
	scanf("%f", &x);
	
	sqt = sqrt(x);
	
	printf("The square root is: %f", sqt);
	
	return 0;	
}
