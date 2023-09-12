#include<stdio.h>

int main(){
	int a, b, c;
	
	printf("Enter the 3 points:");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a > b && a > c){
		printf("Max. no. of points: %d", a);
	}
	
	else if(b > c){
		printf("Max. no. of points: %d", b);
	}
	else if(a == b && a == c){
		printf("Max. no. of points: %d", a);
	}
	else{
		printf("Max. no. of points: %d", c);
	}
	return 0;	
}
