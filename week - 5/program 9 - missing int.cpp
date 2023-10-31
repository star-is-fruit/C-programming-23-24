#include<stdio.h>

int main(){
	
	int n, flag = 0, num;
	
	printf("Enter upper limit:");
	scanf("%d", &n);
	
	int a[n];
	
	printf("Enter %d elements from 1 to %d: ", n, n);
	for(int b = 0; b < n-1; b++){
		scanf("%d", &a[b]);
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 0; j < n-1; j++){
			if(i == a[j]){
				flag = 1;
				break;
			}
			flag = 0;
		}
		
		if(flag == 0){
			num = i;
			break;
		}
	}
	
	printf("Missing number: %d", num);
	
	return 0;	
}
