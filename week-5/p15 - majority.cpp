#include<stdio.h>

int main(){
	int n, count = 0;

	printf("Enter no of elements: ");
	scanf("%d", &n);
	
	int arr[n];
	
	printf("Enter %d elements: ");
	
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(arr[i] == arr[j]){
				count += 1;
			}
		}
		
		if(count + 1 > n/2){
			printf("Majority element is: %d", arr[i]);
			break;
		}
		
		count = 0;
	}
	
	if(count == 0){
		printf("No majority element");
	}
	
	return 0;
}
