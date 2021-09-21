#include<stdio.h>
int returnWithoutProt(int x) {
	return 110+x;
}
int main() {
	int x = returnWithoutProt(2);
	printf("%d", x);
	return 0;
}
