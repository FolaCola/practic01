#include <stdio.h>
#define DaysInY 365
#define HourInD 24
#define SecoInH 3600

int main(){
	int years = 18;
	
	int days = years * DaysInY;
	int hour = days * HourInD;
	int ticks = hour * SecoInH;
	
	printf("Тики: %d | Часы: %d | Дни: %d | Годы: %d\n", ticks, hour, days, years);
	return 0;
}
 
