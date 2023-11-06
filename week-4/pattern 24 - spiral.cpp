#include<stdio.h>

int main(){
	
	int n;
	
	printf("Enter the order of matrix: ");
	scanf("%d", &n);
	
	int mat[n][n], k = n, p = 1;
	
	for(int i = 0; i < (n+1)/2; i++){
		for(int j = 0; j < (n - 2 * i); j++){
			mat[i][j+i] = p++;
		}
		
		for(int j = 0; j < (n - 2 * (i + 1)); j++){
			mat[j+i+1][n-i-1] = p++;
		}
		
		if(n % 2 == 0 || i != (n+1)/2 - 1){
			for(int j = 0; j < (n - 2 * i); j++){
				mat[n-i-1][n-i-j-1] = p++;
			}
		}
		
		for(int j = 0; j < (n - 2 * (i + 1)); j++){
			mat[n-i-j-2][i] = p++;
		}
		
	}
	
	for(int k = 0; k < n; k++){
		for(int l = 0; l < n; l++){
			printf("%6d ", mat[k][l]);
		}	
		printf("\n");
	}
	
	return 0;
}
