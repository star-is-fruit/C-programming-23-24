#include<stdio.h>

int main(){
	int a, b, c;
	
	printf("Enter 3 numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a == b == c){
		printf("Equal");
	}
	else{
		printf("Not Equal");
	}
	
	return 0;
}
