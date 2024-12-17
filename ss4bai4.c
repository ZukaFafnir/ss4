#include<stdio.h>
int main(){
	int month;
	scanf("%d",&month);
	switch(month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("this month has 31 days");
			break;
		case 4: case 6: case 9: case 11:
		    printf("this month has 30 days");
		    break;
		case 2:
			printf("this month has 28 or 29 days");
			break;
		default:
			printf("invalid data!");
	}
		return 0;
}
