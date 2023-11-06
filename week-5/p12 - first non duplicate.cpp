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
	
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(arr[i] == arr[j]){
				flag = 1;
				break;
			}
		}
		
		if(flag == 0){
			printf("First non-repeating element: %d", arr[i]);
			break;
		}
		
		flag = 0; //resetting flag for next iteration
	}
	
	return 0;
}
