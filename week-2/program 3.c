#include<stdio.h>

/*
formula: 10 rs per unit for unit 1 -> 100
20 rs per unit for unit 101 -> 200
30 rs per unit for unit 201 -> 300
40 rs per unit for every extra unit consumed
*/
int main(){
	float unit, charge;
	
	printf("Enter number of units consumed: ");
	scanf("%f", &unit);
	
	if(unit <= 100){
		charge = unit * 10;
	}
	else if(unit <= 200){
		charge = unit * 20 - 1000;
	}
	else if(unit <= 300){
		charge = unit * 30 - 3000;
	}
	else if(unit > 300){
		charge = unit * 40 - 6000;
	}
	else{
		printf("Invalid input");
	}
	
	printf("Chrages: %f", charge);
	
	return 0;
}
