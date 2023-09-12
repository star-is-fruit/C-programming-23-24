#include<stdio.h>

int main(){
	int l, b, ar;
	printf("Enter the two dimensions: ");
	
	scanf("%d %d", &l, &b);

	ar = l * b;
	
	printf("The area of the square is: %d", ar);
	
	return 0;
}
