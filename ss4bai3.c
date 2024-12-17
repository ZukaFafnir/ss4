#include<stdio.h>
int main(){
	int number;
	scanf("%d",&number);
	
	if(number %3==0 && number %5==0){
        
        printf("this number divisible by 3,5");
		} 
	
	else if(number %5==0){
			printf("this number indivisible by 3 and divisible 5 ");
		}
	     else if(number %5==0){
			printf("this number divisible by 3 and indivisible 5 ");
	    }
		       else{
			printf("this number indivisible by 3 and 5");
		}
	
	return 0;
}
