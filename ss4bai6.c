#include<stdio.h>
int main(){
	long long price;
	int meter1,meter2;
	printf("Please record the electric meter reading at the beginning and end of the month: ",meter1,meter2);
	scanf("%d%d",&meter1,&meter2);
    
    int meter;
    meter = meter2 - meter1;
    if(meter>=0){
    	if(meter<50)
    		price = meter * 10000;
		else if(meter<100)
			price = meter * 15000;
		else if(meter<150)
			price = meter * 20000;
		else if(meter<200)
			price = meter * 25000;
		else
			price = meter * 30000;
		printf("The cost of the ticket is %lld VND\n", price);
		}
	    else 
		printf("Invalid meter reading. Please check your input.\n");


    return 0;
}

