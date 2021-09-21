#include<stdio.h>
int returnWithProt(int);
int main() {
	
	int x = returnWithProt(2);
	printf("%d", x);
	return 0;
}

int returnWithProt(int x) {
	return 110+x;
}
