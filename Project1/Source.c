#include <stdio.h>

int main() {
	char agestring[10];
	int age;
	int bonus;

	printf("Enter your age: ");
	gets(agestring);
	age = atoi(agestring); // atoi is a function convert string to int 
	if (age > 45) {
		bonus = 1000;
	}
	else {
		bonus = 500;
	}
	printf("Your age is %i, so you get %i", age, bonus);
	getchar();
	return 0;
}