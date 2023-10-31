#include<stdio.h>

int main(){
	
	int n;
	
	printf("Enter number of elements:");
	scanf("%d", &n);
	
	int a[n], ref[n];
	
	printf("Enter %d elements: ", n);
	for(int b = 0; b < n; b++){
		scanf("%d", &a[b]);
	}
	
	int size = n;
	
	for(int i = 0; i < size; i++){
		for(int j = i+1; j < size; j++){
			if(a[i] == a[j]){
				for(int k = j; k < size - 1; k++){
					a[k] = a[k+1];
				}
				
				size--;
				break;
			}
		}
	}
	
	printf("Result list: ");
	for(int l = 0; l < size; l++){
		printf("%d ", a[l]);
	}
	
	return 0;	
}



