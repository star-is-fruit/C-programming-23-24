#include<stdio.h>

int main(){
	
	int n;
	
	printf("Enter number of lines: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		for(int j = n - i; j > 0; j--)	{
			printf("%c ", 65 + i);
		}
		printf("\n");
	}
	
	return 0;
}
