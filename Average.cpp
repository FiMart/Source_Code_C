#include<stdio.h>
int main() 
{
	double a, b, c, ans = 0;
	scanf("%lf %lf %lf", &a, &b, &c);
	ans = a+b+c;
	printf("%.2lf", ans/3);
	return 0;
}
