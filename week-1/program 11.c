#include<stdio.h>
#include<math.h>

int main(){
	float p, t, r, si, ci;
	
	printf("Enter principal amount:");
	scanf("%f", &p);

	printf("Enter time period in yrs:");
	scanf("%f", &t);
	
	printf("Enter rate of interest:");
	scanf("%f", &r);
		
	si = (p * t * r)/100 + p;
	
	ci = pow(p * (r/100 + 1),t);
	
	printf("The simple interest is: %f \nThe compound interest is: %f", si, ci);
	
	return 0;	
}
