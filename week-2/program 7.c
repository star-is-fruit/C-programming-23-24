#include<stdio.h>

int main(){
	float a, b, c, d, e, avg;
	char gr;
	
	printf("Enter the 5 subject marks: ");
	scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
	
	avg = (a + b + c + d + e)/5;
	
	printf("The average of 5 subjects is: %f %%\n", avg);
	
	if(avg >= 90){
		gr = 'A';
	}
	else if(avg >= 80){
		gr = 'B';
	}
	else if(avg >= 70){
		gr = 'C';
	}
	else if(avg >= 60){
		gr = 'D';
	}
	else if(avg >= 40){
		gr = 'E';
	}
	else{
		gr = 'F';
	}
	
	printf("Grade: %c", gr);
	
	return 0;
}
