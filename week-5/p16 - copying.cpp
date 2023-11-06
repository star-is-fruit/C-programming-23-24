#include<stdio.h>

int main(){
	int n;

	printf("Enter no of elements: ");
	scanf("%d", &n);
	
	int arr[n], copy[n];
	
	printf("Enter %d elements: ");
	
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < n; i++){
		copy[i] = arr[i];
	}
	
	printf("Duplicate array: ");
	for(int i = 0; i < n; i++){
		printf("%d ", copy[i]);
	}
	
	return 0;
}
