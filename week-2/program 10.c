#include<stdio.h>

int main(){
	int yr, month;
	
	printf("Enter the year: ");
	scanf("%d", &yr);
	
	printf("Enter the month: ");
	scanf("%d", &month);
	 
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
		printf("Number of days: 31");
	}
	else if(month == 4 || month == 6 || month == 9 || month == 11){
		printf("Number of days: 30");
	}
	else if(month == 2){
		if(yr % 4 == 0 && (yr % 100 != 0 || yr % 400 == 0)){
			printf("Number of days: 29");
		}
		else{
			printf("Number of days: 28");
		}
	}
	else{
		printf("Enter valid year and month");
	}
		
	
	return 0;
}

