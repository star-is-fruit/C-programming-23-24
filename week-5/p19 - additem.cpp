#include<stdio.h>

int main(){
	int n, add;

	printf("Enter no of elements: ");
	scanf("%d", &n);
	
	int arr[n], narr[n+1];
	
	printf("Enter %d elements: ", n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Enter the element to add: ");
	scanf("%d", &add);
	
	narr[0] = add;
	
	for(int i = 1; i < n+1; i++){
		narr[i] = arr[i-1];
	}
	
	
	for(int i = 0; i < n+1; i++){
		for(int j = 0; j < n - i; j++){
			if(narr[j] > narr[j+1]){
				narr[j] += narr[j+1];
				narr[j+1] = narr[j] - narr[j+1];
				narr[j] -= narr[j+1];
			}
		}
	}
	
	
	printf("New array: ");
	for(int i = 0; i < n+1; i++){
		printf("%d ", narr[i]);
	}
	
	return 0;
}
