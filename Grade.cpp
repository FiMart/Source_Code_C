#include <stdio.h>
int main() {
	int num;
	scanf("%d" ,num);
	if(num>100)
	{
		printf("Error");
	}
	else if(num>=80 && num<=100)
	{
		printf("A");
	}
	else if(num>=75)
	{
		printf("B+");
	}
	else if(num>=70)
	{
		printf("B");
	}
	else if(num>=65)
	{
		printf("C+");
	}
	else if(num>=60)
	{
		printf("C");
	}
	else if(num>=55)
	{
		printf("D+");
	}
	else if(num>=50)
	{
		printf("D");
	}
	else if(num>=0)
	{
		printf("F");
	}
	else
	{
		printf("Error");
	}
}
