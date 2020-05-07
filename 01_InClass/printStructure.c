#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 50

struct Student
{
	char name[MAX_NAME_LENGTH];
	int age;
};


void printStudentPassByValue( struct Student inputStudent);
void printStudentPassBYReference( struct Student *inputStudent);


int main(int argc, char *argv[])
{

	struct Student student1; // instantiate a Student

	printf("Enter name:   ");
	fgets(student1.name, MAX_NAME_LENGTH, stdin);

	printf("Enter age:  ");
	scanf("%d", &student1.age);

	printStudentPassByValue(student1);
	printStudentPassBYReference( &student1);
	



	return EXIT_SUCCESS;
}

void printStudentPassByValue( struct Student inputStudent)
{
	printf("\n Student information (by value):\n");
	printf("------------------------------------\n");
	printf("Name: %s", inputStudent.name);
	printf("\nAge %d\n", inputStudent.age);
	//inputStudent.age++;
}








void printStudentPassBYReference( struct Student *inputStudent)
{
	printf("\n Student information (by reference):\n");
	printf("------------------------------------\n");
	printf("Name: %s", inputStudent->name);
	printf("\nAge: %d\n" , inputStudent->age);
	//inputStudent->age++;
}
