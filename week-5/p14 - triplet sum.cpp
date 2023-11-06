#include<stdio.h>
#define TRUE 1
#define FALSE 0

int main(){
	int n, flag = 0, sum, a, b, c;

	printf("Enter no of elements: ");
	scanf("%d", &n);
	
	int arr[n];
	
	printf("Enter %d elements: ");
	
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Enter sum to check: ");
	scanf("%d", &sum);
	
	for(int i = 0; i < n; i++){
		
		for(int j = i + 1; j < n; j++){
			
			for(int k = j + 1; k < n; k++){
				
				if(arr[i] + arr[j] + arr[k] == sum){
					flag = 1;
					a = arr[i], b = arr[j], c = arr[k];
					
					break;
				}
			}
		}
		
		if(flag == 1){
			printf("Triplet whose sum is %d = %d , %d and %d\n", sum, a, b, c);
			return TRUE;
		}
		
		flag = 0;
	}
	
	return FALSE;
}
