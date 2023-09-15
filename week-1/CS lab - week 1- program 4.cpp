#include<stdio.h>

int main(){
	float a, b, c, d, e, avg;
	
	printf("Enter the 5 subject marks: ");
	scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
	
	avg = (a + b + c + d + e)/5;
	
	printf("The average of 5 subjects is: %f %%", avg);
	
	return 0;
}
