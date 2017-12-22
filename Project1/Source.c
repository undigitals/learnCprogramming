#include <stdio.h>

int main() {
	char agestring[10];
	int age;
	int bonus;

	printf("Enter your age: ");
	gets(agestring);
	age = atoi(agestring);
	if (age != 0) {
		if (age > 45) {
			bonus = 1000;
		}
		else {
			bonus = 500;
		}
		printf("your age is %i and your bonus is %i", age, bonus);
		getchar();
	}
	else {
		printf("Your input is not valid please try again later!!!");
		getchar();
	}


	return 0;
}