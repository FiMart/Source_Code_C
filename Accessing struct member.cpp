#include<stdio.h>
#include<string.h>
struct Person {
	char name[20];
	unsigned int age;
	char gender;
	float height;
}hooman;

int main() {
	strcpy(hooman.name, "Tuu");
	hooman.age = 67;
	hooman.gender = 'M';
	hooman.height = 1.67;

	printf("hooman.name = %s\n", hooman.name);
	printf("hooman.age = %u\n", hooman.age);
	printf("hooman.gender = %c\n", hooman.gender);
	printf("hooman.height = %.2f", hooman.height);
	return 0;
}

