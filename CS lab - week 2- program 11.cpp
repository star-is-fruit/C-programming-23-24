#include<stdio.h>

int main(){
	int d1, m1, y1, d2, m2, y2;
	
	printf("Enter date: ");
	scanf("%d", &d1);
	
	printf("Enter month: ");
	scanf("%d", &m1);
	
	printf("Enter year: ");
	scanf("%d", &y1);
	
	 
	if(m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12){
		if(d1 < 31){
			d2 = ++d1;
			m2 = m1;
			y2 = y1;
		}
		
		else if(d1 == 31)
			if(m1 != 12){
				d2 = 1;
				m2 = ++m1;
				y2 = y1;
			}
			else{
				d2 = 1;
				m2 = 1;
				y2 = ++y1;
			}
			
	}
	else if(m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11){
		if(d1 < 30){
			d2 = ++d1;
			m2 = m1;
			y2 = y1;
		}
		else{
			d2 = 1;
			m2 = ++m1;
			y2 = y1;
		}
		
	}
	else if(m1 == 2){
		if(y1 % 4 == 0 && (y1 % 100 != 0 || y1 % 400 == 0)){
			if(d1 < 29){
			d2 = ++d1;
			m2 = m1;
			y2 = y1;
			}
			else{
			d2 = 1;
			m2 = ++m1;
			y2 = y1;
			}
		}
		else{
			if(d1 < 28){
			d2 = ++d1;
			m2 = m1;
			y2 = y1;
			}
			else{
			d2 = 1;
			m2 = ++m1;
			y2 = y1;
			}
		}
	}
	else{
		printf("Enter valid year and month");
	}
	
	printf("The updated date: %d %d %d", d2, m2, y2);
	return 0;
}
