#include<stdio.h>

int main(){
	
	int n;
	
	printf("Enter number of elements:");
	scanf("%d", &n);
	
	int a[n];
	
	printf("Enter %d elements: ", n);
	for(int b = 0; b < n; b++){
		scanf("%d", &a[b]);
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(a[j] > a[j+1]){
				a[j] += a[j+1];
				a[j+1] = a[j] - a[j+1];
				a[j] -= a[j+1];
			}
		}
	}
	
	printf("Sorted list: ");
	
	for(int k = 0; k < n; k++){
		printf("%d ", a[k]);
	}
	return 0;	
}
