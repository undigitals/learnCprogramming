#include <stdio.h>

/*
	**** user input values used in this programm***
	1. getchar() -> return: int -> argument: void;
	2. getc() -> return: int; argument-> INPut Stream;
	3. gets () -> return-> pointer; argument-> pointer to array of chars;
		char *gets (char *str);
		reads whole line \t too untill '\n' or EOF
	4. fgets (); return -> pointer; argument-> 1.pointer to array of chars, 2. int maxlen, 3. input stream;
		char *fgets (char *ptr, int maxLen, FILE *stream);
*/

void flush_input() //cleans the buffer from extra memory which more than initialized, 
				
{
	int ch=0; // int var ch -> takes the extra memory but it does not print it!!
	while ((ch = getc(stdin)) != '\n' && ch != EOF);  // this line prevents from pressing enter 
													// like for example if you press enter it doesnot count as '\n'
	
}

void getinput_with_fgets() {
	char firstname[5];
	char lastname[5];
	printf("Enter your firstname: ");
	fgets(firstname, 5, stdin);
	flush_input();
	printf("Enter your lastname: ");
	fgets(lastname, 5, stdin);
	flush_input();
	printf("Hello, %s, %s,\n", firstname, lastname);


}
void getinput_with_gets() {
	char firstname[5];
	char lastname[5];
	printf("Enter your first name: ");
	gets(firstname);
	printf("Enter your lastname: ");
	gets(lastname);

	printf("Hello, %s , %s, \n ", firstname, lastname);
}

int main() {
	//test();
	//getinput_with_gets();
	getinput_with_fgets();


	return 0;
}