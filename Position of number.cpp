#include<stdio.h>
int main() 
{
  float x,y;
  unsigned int n;
  scanf("%f\n%f\n%u" ,&x,&y,&n);
  printf("%f" ,x+((n-1)*(y-x)));
  return 0;
}
