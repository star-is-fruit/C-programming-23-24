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
	
	for(int i = 0; i < n/2; i++){
		a[i] += a[n-i-1];
		a[n-i-1] = a[i] - a[n-i-1];
		a[i] = a[i] - a[n-i-1];
	}
	
	for(int j = 0; j < n; j++){
		printf("%d ", a[j]);
	}
	
	return 0;	
}
