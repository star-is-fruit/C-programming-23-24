#include<stdio.h>

int main(){
	int ch;
	float a, b, ans;
	
	printf("Enter your choice:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
	scanf("%d", &ch);
	
	if(ch < 5 && ch > 0){
		printf("Enter first number:");
		scanf("%f", &a);
	
		printf("Enter second number:");
		scanf("%f", &b);	
		
		switch(ch){
			case 1: 
				ans = a + b;
				break;
			
			case 2: 
				ans = a - b;
				break;
			
			case 3: 
				ans = a * b;
				break;
			
			case 4: 
				ans = a / b;
				break;
					
		}
		
		printf("The answer is: %f", ans);
	}
	else printf("Enter valid choice");
}

