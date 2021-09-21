#include<stdio.h>
int main()
{
	int x,i=1;
	scanf("%d",&x);
	for(i; i<13; i++)
	{
		printf("%d x %d = %d\n",x,i,x*i);
	}
	return 0;
}
