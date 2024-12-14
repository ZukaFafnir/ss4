#include<stdio.h>
int main(){
	int year,month,day;
	printf("please enter year,month,day you want to check!! ");
	scanf("%d  %d  %d",&year,&month,&day);
	if(year>0){
		if(month>1&&month<=12){
		
			if(year%400==0 || (year%4==0 && year%100==0)){
				if(month==2){
					if(day>1&&day<=29 ){
					printf("valid data %d/%d/%d",year,month,day);}
					else
					printf("invalid data!!!");
					}		
				else if (month==1 ||month==3 ||month==5 ||month==7 ||month==8 ||month==10 ||month==12 ){
					if(day>1&&day<=31 ){
					printf("valid data %d/%d/%d",year,month,day);}
					else
					printf("invalid data!!!");
					}		
					else {
					if(day>1&&day<31){
					printf("valid data %d/%d/%d",year,month,day);}
					else printf("invalid data!!!");}
				}
				else{
				if(month==2){
					if(day>1&&day<=28 ){
					printf("valid data %d/%d/%d",year,month,day);}
					else
					printf("invalid data!!!");
					}		
				else if (month==1 ||month==3 ||month==5 ||month==7 ||month==8 ||month==10 ||month==12){
					if(day>1&&day<=31 ){
					printf("valid data %d/%d/%d",year,month,day);}
					else
					printf("invalid data!!!");
					}		
					else {
					if(day>1&&day<31){
					printf("valid data %d/%d/%d",year,month,day);}
					else printf("invalid data!!!");}
				}
				
				}
				else 
				printf("invalid data!!!");
			}
			else 
				printf("invalid data!!!");
				return 0;	
			}
		

    

