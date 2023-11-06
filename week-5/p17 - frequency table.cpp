#include<stdio.h>

int main(){
	int n, count = 1, l = 0, dup = 0;

	printf("Enter no of elements: ");
	scanf("%d", &n);
	
	int arr[n], check[n];
	
	printf("Enter %d elements: ");
	
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Frequency of each number:\n");
	
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(arr[j] == arr[i]){
				count += 1;
			}
		}
		
		for(int k = 0; k < l; k++){ // checking if the number was already counted
			if(check[k] == arr[i]){
				dup = 1;
				break;
			}
		}
		
		if(dup == 0){
			printf("%-5d %-3d\n", arr[i], count);			
			check[l++] = arr[i];
		}
		
		count = 1;
		dup = 0;		
	}
	
	return 0;
}
