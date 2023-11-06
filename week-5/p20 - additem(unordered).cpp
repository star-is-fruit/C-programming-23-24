#include<stdio.h>

int main(){
	int n, add, ind;

	printf("Enter no of elements: ");
	scanf("%d", &n);
	
	int arr[n], narr[n+1];
	
	printf("Enter %d elements: ", n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Enter the element to add: ");
	scanf("%d", &add);
	
	printf("Enter the index of the element in the new array: ");
	scanf("%d", &ind);
	
	for(int i = 0; i < n+1; i++){
		if(i < ind){
			narr[i] = arr[i]; //index of new and old array match
		}
		
		else if(i == ind){
			narr[i] = add; //index of new arr must be displaced by 1
		}
		
		else{
			narr[i] = arr[i-1];
		}
	}
	
	
	printf("New array: ");
	for(int i = 0; i < n+1; i++){
		printf("%d ", narr[i]);
	}
		
	return 0;	
}
