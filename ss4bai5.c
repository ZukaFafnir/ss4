#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((c>=a && c<=b)||(c>=b && c<=a)){
		printf("This number is between a and b ");
	}
	else{
		printf("This number isn't between a and b");
	}
	return 0;
}
