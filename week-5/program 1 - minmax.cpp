#include<stdio.h>

int main(){
	
	int max = 0, min, sum = 0, n;
	
	printf("Enter number of elements:");
	scanf("%d", &n);
	
	int a[n];
	
	printf("Enter %d elements: ", n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	min = a[0];
	
	for(int j = 0; j < n - 1; j++){
		if(a[j] > max){
			max = a[j];
		}
		
		if(a[j] < min){
			min = a[j];
		}
		
		sum += a[j];
	}
	
	sum += a[n-1];
	
	float avg = float(sum) / float(n);
	
	printf("Maximum: %d \nMinimum: %d \nAverage: %.2f", max, min, avg);
	
	return 0;
}
