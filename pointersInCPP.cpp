// Author: Nathan Murphy

#include <stdio.h>
void assignPointer(int* pointer, int &reference); //forward declare our method.

int main() {
	int number1, number2, number3; //declare variables.
	int *ptr1, *ptr2; //declare integer pointers.

	ptr1 = &number1; //assign address of number 1 to ptr1.
	number2 = 10; //assign value to number 2 variable.
	ptr2 = new int(); //allocate space for the pointer.
	assignPointer(ptr2, number2); //call to function assignPointer to assign ptr2.
	int *ptr3 = &number3; //declaration and assignment of ptr3 with address of number3.


	number1 = 15; //assign number1.
	*ptr2 = 7; // derefence ptr2 and store 7 into that memory location.
	*ptr3 = *ptr1 + *ptr2; //dereference all the pointers, add the values of ptr1 and ptr2, and store the result in ptr 3

						   //Print out the adresses of the variables and their values.
	printf("Address\t\t\t Content\t\t Dereference\n");
	printf("-------\t\t\t -------\t\t -----------\n");
	printf("&n1 = %p\t n1 = %d\n", &number1, number1); //%p: address of pointer
	printf("&n2 = %p\t n2 = %d\n", &number2, number2); //\t: tab, \n: new line
	printf("&n3 = %p\t n3 = %d\n", &number3, number3); //%d: decimal format
	printf("&p1 = %p\t p1 = %p\t *p1 = %d\n", &ptr1, ptr1, *ptr1);
	printf("&p2 = %p\t p2 = %p\t *p2 = %d\n", &ptr2, ptr2, *ptr2);
	printf("&p3 = %p\t p3 = %p\t *p3 = %d\n", &ptr3, ptr3, *ptr3);
	return 0; //end program.
}
void assignPointer(int* pointer, int &reference) //pass by reference and pass the memory address variable (pointer) that we want to store into.
{
	//note, c language does not support references.
	pointer = &reference; //assign address of reference to pointer.
}