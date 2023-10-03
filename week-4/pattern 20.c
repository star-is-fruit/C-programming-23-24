#include<stdio.h>

int main(){
	
	int n, p = 1;
	
	printf("Enter number of lines: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		for(int j = n - i; j > 0; j--)	{
			printf("%d ", p);
			p++;
		}
		printf("\n");
	}
	
	return 0;
}
