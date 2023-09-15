#include<stdio.h>

int main(){
	float r, ar;
	
	printf("Enter the radius of circle: ");
	scanf("%f", &r);
	
	ar = 3.14 * r * r;
	
	printf("Area of circle is: %f", ar);

	return 0;
}
