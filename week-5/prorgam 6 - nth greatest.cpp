#include<stdio.h>

int main(){
	
	int n, k;
	
	printf("Enter number of elements:");
	scanf("%d", &n);
	
	int a[n];
	
	printf("Enter %d elements: ", n);
	for(int b = 0; b < n; b++){
		scanf("%d", &a[b]);
	}
	
	printf("Enter k value: ");
	scanf("%d", &k);
	
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(a[j] > a[j+1]){
				a[j] += a[j+1];
				a[j+1] = a[j] - a[j+1];
				a[j] -= a[j+1];
			}
		}
	}
	
	printf("%dth greatest: %d\n%dth smallest: %d", k, a[k-1], k, a[n-k]);	
	
	return 0;	
}
