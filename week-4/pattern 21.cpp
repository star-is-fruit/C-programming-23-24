#include<stdio.h>

int main(){
	
	int n, m;
	
	printf("Enter number of lines: ");
	scanf("%d", &n);
	
	printf("Enter starting integer: ");
	scanf("%d", &m);
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < i + 1 ; j++){
			printf("%d ", m + i);
		}
		printf("\n");
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - i; j++){
			printf("%d ", n - i + m - 1);
		}
		printf("\n");
	}
	
	return 0;
}
