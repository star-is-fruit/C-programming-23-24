#include<stdio.h>

int main(){
	int n;
	
	printf("Enter max value: ");
	scanf("%d", &n);
	
	for(int i = 0; i <= n; i+=2){
		printf("%d\n", i);		
	}
	
	return 0;
}
