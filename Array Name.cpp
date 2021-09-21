#include<stdio.h>
int main() 
{
	char name[100];
	scanf("%s", &name);
	int count=0;
	while(name[count]!='\0')
	{
		count++;
	}
	printf("%d", count);
	return 0;
}
