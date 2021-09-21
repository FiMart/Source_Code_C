#include<stdio.h>
int recursive(int x) {
	if(x<=1) {
		return x;
	}
	return x+recursive(x-1);
}
int main() {
	int x = recursive(10);
	printf("%d", x);
	return 0;
}
