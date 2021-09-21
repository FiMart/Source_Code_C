#include<stdio.h>
#include<math.h>
int main()
{
	int N;
	int sum=0;
	scanf("%d", &N);
	for(int i=1; i<=(N-1); i++)
	{
		if(N % i==0)
		{
			sum = sum +i;
			
		}
	}
	printf("%d", sum);
	return 0;
}
