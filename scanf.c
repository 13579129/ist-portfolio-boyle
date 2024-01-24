#include <stdio.h>

int main() 
{
	int age;
	float gpa;
	char grade;

	printf("type age: ");
	scanf(" %i", &age);
	fflush(stdin);

	printf("type gpa: ");
	scanf(" %f", &gpa);
	fflush(stdin);

	printf("type grade: ");
	scanf(" %c", &grade);
	
	printf("age %i, gpa %f, grade %c\n", age, gpa, grade);

	return 0;
}
