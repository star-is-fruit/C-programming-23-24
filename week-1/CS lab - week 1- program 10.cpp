#include<stdio.h>
#include<math.h>

int main(){
	float x, cub;
	
	printf("Enter a number:");
	scanf("%f", &x);
	
	cub = pow(x, 3);
	
	printf("The cube is: %f", cub);
	
	return 0;	
}
