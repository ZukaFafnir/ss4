#include<stdio.h>
int main(){
	int a,b,c;
	printf("Please enter the lengths of the three sides.");
	scanf("%d %d %d",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
	printf("These three sides form a triangle");
	else
	printf("These three sides not form a triangle");
	return 0;
}
