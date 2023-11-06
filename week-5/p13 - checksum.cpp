#include<stdio.h>

int main(){
	int n, sum, flag = 0, dup = 0, ind = 0;

	printf("Enter no of elements: ");
	scanf("%d", &n);
	
	int arr[n], check[n]; //check[n] to store already printed values
	
	printf("Enter %d elements: ");
	
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Enter sum to check: ");
	scanf("%d", &sum);
	
	for(int i = 0; i < n; i++){
		int j = i + 1;
		for(; j < n; j++){
			if(arr[i] + arr[j] == sum){
				flag = 1;
				break;
			}
		}
		//for checking if the pair was already printed
		for(int k = 0; k < n; k++){
			if(arr[i] == check[k]){
				for(int l = 0; l < n; l++){
					if(arr[j] == check[l]){
						dup = 1;
					}
				}
			}
		}
		
		if(flag == 1 && dup == 0){
			printf("Pair whose sum is %d = %d and %d\n", sum, arr[i], arr[j]);
			check[ind++] = arr[i];
			check[ind++] = arr[j];
		}
		flag = 0;
	}
	
	
	return 0;
}
