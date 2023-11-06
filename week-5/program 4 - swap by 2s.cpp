#include<stdio.h>

int main(){
	
	int n;
	
	printf("Enter number of elements:");
	scanf("%d", &n);
	
	int a[n];
	
	printf("Enter %d elements: ", n);
	for(int b = 0; b < n; b++){
		scanf("%d", &a[b]);
	}
	
	if(n%2 == 0){
		for(int i = 0; i < n; i += 2){
			a[i] += a[i+1];
			a[i+1] = a[i] - a[i+1];
			a[i] -= a[i+1];
		}
	}
	
	printf("Result list: \n");
	
	for(int j = 0; j < n; j++){
		printf("%d ", a[j]);
	}
	
	return 0;	
}
