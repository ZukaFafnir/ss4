#include<stdio.h>
int main(){
	int a,b,c,number1,number2,number3;
	printf("please enter three number a,b and c you want to check ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c){
	number3=a;
	if(b>c){
		number2=b;
		number1=c;
	}
	else{
	    number2=c;
	    number1=b;
	}
	}
	else if(b>a&&b>c){
	number3=b;
	if(a>c){
		number2=a;
		number1=c;
	}
	else{
	    number2=c;
	    number1=a;
	}
	}
	else if(c>a&&c>b){
	number3=c;
	if(a>b){
		number2=a;
		number1=b;
	}
	else{
	    number1=a;
	    number2=b;
	}}
	printf("The list of integers you entered in ascending order: %d,%d,%d",number1,number2,number3);
	return 0;
	}
	
	
	
