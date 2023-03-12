// This program is used to make arithmetic calculations of 2 numbers for example addition, subtraction, multiplication, and division.
// I've used function pointers to build the program. It's a very simple program and it's for beginners. This is a very precise application of function pointers.
//Function pointers can be used in such cases that requires calling a function at a run time unlike at compilation time.

#include<stdio.h>
#include<stdlib.h>
#define x 4

float sum(float a, float b) { return (a + b); }                       //sum function prototyping. Takes 2 float arguments, and returns summation of that two numbers of float type.
float subtraction(float a, float b) { return (a - b); }          // subtraction function prototyping. Takes 2 float arguments, and returns subtraction of that two numbers of float type.
float multiplication(float a, float b) { return (a * b); }    //multiplication function prototyping. Takes 2 float arguments, and multiplies of that two numbers and returns float type.
float division(float a, float b) { return (a / b); }              //division function prototyping. Takes 2 float arguments, and returns division of that two numbers of float type.


int main()
{
	int choice;                                  // This is an integer variable entered by user that helps us to determine which function we'll call
	float a, b;                                   // These are the float variables . "a" and "b" is entered by user and those are the numbers functions will take as arguments
	printf("Enter your choice : 0 is for sum, 1 is for subtraction, 2 is for multiplication, and 3 is for division\n");//ask user to enter number
	scanf_s("%d", &choice);         //store that value in choice variable
	printf("Enter the two numbers that you want to perform operation : \n");// ask user to enter two numbers
	scanf_s("%f %f", &a, &b);      //store those two numbers
	float(*functptr[x])(float, float) = { sum, subtraction, multiplication, division };// Here, funcptr is function pointer that takes 2 arguments as a float type. It points to functions and the addresses of the functions is stored here.



	printf("%f", functptr[choice](a, b));      //print the result of the operation
	return 0;
}
