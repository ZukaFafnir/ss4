#include<stdio.h>
int main(){
	int year;
	printf("please enter the year you want to check: ");
	scanf("%d",&year);
	if(year%400==0 || (year%4==0 && !year%100==0))
	printf("This year is a leap year.");
	else
	printf("This year is a common year.");
	return 0;
	
	
}
