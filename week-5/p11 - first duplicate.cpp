#include<stdio.h>

int main(){
	int n, flag = 0;
	
	printf("Enter no of elements: ");
	scanf("%d", &n);
	
	int arr[n];
	
	printf("Enter %d elements: ");
	
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < n; i++){ //i matches index of arr
		for(int j = i + 1; j < n; j++){ //search index j starts after i
			if(arr[j] == arr[i]){
				flag = 1; //indicating duplicate exists
				break;
			}
			
		}
		
		if(flag == 1){ 
			printf("First duplicate element: %d", arr[i]);
			break; //must exit if first duplicate is found
		}
	}
	
	return 0;
}
