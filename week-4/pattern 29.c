#include<stdio.h>

int main(){
	int n;
	
	printf("Enter number of lines: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		for(int k = 0; k < n - i - 1; k++){
			printf("  ");
		}
		
		for(int l = 0; l < i + 1; l++)	{
			if(i % 2 != 0){
				printf("- ");
			}
			else{
				printf("* ");
			}
		}
		printf("\n");
	}
	
	for(int i = 0; i < n - 1; i++){
		for(int k = 0; k < i + 1; k++){
			printf("  ");
		}
		
		for(int l = 0; l < n - i - 1; l++)	{
			if(i % 2 != 0){
				printf("* ");
			}
			else{
				printf("- ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
