#include<stdio.h>

int main(){
	
	int n;
	
	printf("Enter number of lines: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 7; j++)	{
			if(i % 2 != 0){
				if(j == 0)
					printf("%d", i + 2);
				
				else
					printf("%d", i + 1);
			}
			else{
				if(j == 6)
					printf("%d", i + 2);
				
				else
					printf("%d", i + 1);
			}
		}
		printf("\n");
	}
	
	return 0;
}
