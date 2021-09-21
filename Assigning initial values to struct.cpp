#include<stdio.h>
#include<string.h>
struct Person {
	char name[20];
	unsigned int age;
	char gender;
	float weight, height;
}hooman;

int main() {
	struct Person Tuu = {"Tuu", 67, 'M', 99, 1.67};
	return 0;
}
