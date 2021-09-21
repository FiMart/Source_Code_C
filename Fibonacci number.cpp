#include<stdio.h>
int fibo(int x) {
	if(x<=1) {
		return x;
	}
	return fibo(x-2)+fibo(x-1);
}
int main() {
	int i , x;
	for(i=1;i<=10;i++) {
		x = fibo(i);
		if(i<10)
		printf("%d", x);
		else printf("%d", x);
	}
	return 0;
}
