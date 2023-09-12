#include<stdio.h>

int main(){
	float a, b, ans1;
	int ans2;
	
	printf("Enter the two numbers:");
	scanf("%f %f", &a, &b);
	
	ans1 = a * b;
	ans2 = ans1;
	
	printf("The product in float: %f \n The product in int: %d", ans1, ans2);
	
	return 0;
}
