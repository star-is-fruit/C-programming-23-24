#include<stdio.h>

int main(){
	int a, b, c;
	
	printf("Enter the side lengths: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a == b && a == c){
		printf("Equilateral triangle");
	}
	else if(a != b && b != c&& c != a){
		printf("scalene triangle");
	}
	else
		printf("Isosceles triangle");
		
	return 0;
}
