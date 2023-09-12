#include<stdio.h>

int main(){
	int km, m, cm, mm;
	
	printf("Enter the distance in km:");
	scanf("%d", &km);
	
	m = km * 1000;
	cm = km * 10000;
	mm = km * 1000000;	
	
	printf("The distance in m: %d \n the distance in cm: %d \n the distance in mm: %d", m, cm, mm);
	
	return 0;
}
