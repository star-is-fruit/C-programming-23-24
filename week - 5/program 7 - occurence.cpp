#include<stdio.h>

int main(){
	
	int n, k, coun = 0;
	
	printf("Enter number of elements:");
	scanf("%d", &n);
	
	int a[n];
	
	printf("Enter %d elements: ", n);
	for(int b = 0; b < n; b++){
		scanf("%d", &a[b]);
	}
	
	printf("Enter search element: ");
	scanf("%d", &k);
	
	for(int i = 0; i < n; i++){
		if(a[i] == k){
			coun += 1;
		}
	}
	
	printf("Number of occurences: %d", coun);
	
	return 0;	
}
