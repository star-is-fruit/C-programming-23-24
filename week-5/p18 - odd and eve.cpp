#include<stdio.h>

int main(){
	int n, nodd = 0, neve = 0;

	printf("Enter no of elements: ");
	scanf("%d", &n);
	
	int arr[n], odd[n], even[n];
	
	printf("Enter %d elements: ");
	
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < n; i++){
		if(arr[i] % 2 == 0){
			even[neve++] = arr[i];
		}
		
		else if(arr[i] % 2 != 0){
			odd[nodd++] = arr[i];
		}
	}
	
	printf("Odd array: ");
	for(int i = 0; i < nodd; i++){
		printf("%d ", odd[i]);
	}
	
	printf("\n");
	
	printf("Even array: ");
	for(int i = 0; i < neve; i++){
		printf("%d ", even[i]);
	}
	
	return 0;
}
