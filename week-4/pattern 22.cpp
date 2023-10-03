#include<stdio.h>

int main(){
	
	int n;
	
	printf("Enter number of lines: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < i + 1 ; j++){
			if(j == 0)
				printf("%d", i + 1);
				
			else
				printf("*%d", i + 1);
		}
		printf("\n");
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - i; j++){
			if(j == 0)
				printf("%d", n - i);
				
			else
				printf("*%d", n - i);
		}
		printf("\n");
	}
	
	return 0;
}
