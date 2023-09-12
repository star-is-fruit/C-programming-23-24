#include<stdio.h>

int main(){
	float bp, da, hra, gross;
	
	printf("Enter basic pay: ");
	scanf("%f", &bp);
	
	da = bp * 0.08;
	hra = bp * 0.24;
	
	gross = bp + da + hra;
	
	printf("Net salary of employee: %f", gross);
	return 0;
}
