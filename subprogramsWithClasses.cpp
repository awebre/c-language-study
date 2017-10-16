#include <stdio.h>
/*
*Author: Nathan Murphy
*Class: CMPS 401 
*Program: Sub-program functionality and features of C++
*/
class abstractClassroomRatio
{
	virtual double studentProfessorRatio() = 0; //= 0 makes this pure virtual, which makes this class abstract.
};

class classone : public abstractClassroomRatio //we extend the abstract class to implement the virtual function.
{
private:
	//private variables------------------
	int students = 30;
	int professors = 2;
public:
	double studentProfessorRatio() override
	{
		printf("processing in classone \n");
		double result = (double)(students / professors);
		printf("%f \n", result);
		return result;
	}
	void setStudentAndProfessorValues(int students, int professors) //pass by value
	{
		this->students = students;
		this->professors = professors;
	}
	classone()
	{
		//default no arg constructor.
	}
	classone(int students, int professors)
	{
		this->students = students;
		this->professors = professors;
	}
	int getStudents()
	{
		return students;
	}
	int getProfessors()
	{
		return professors;
	}
};

class classtwo : abstractClassroomRatio
{
private:
	//private variables------------------
	int students = 28;
	int professors = 3;
public:
	double studentProfessorRatio() override
	{
		printf("processing in classtwo \n");
		double result = (double)(students / professors);
		printf("%f \n", result);
		return result;
	}
	void setStudentAndProfessorValues(const int &students, const int &professors) //pass by reference.
	{
		//params students and professors can be made const because they are not modified during the function call.
		this->students = students;
		this->professors = professors;
	}
};

int main()
{
	classone classOneObject; //declare a classone object.
	classtwo classTwoObject; //declare a classtwo object.
	classone* newClassOneObject = new classone(121, 4); //dynamically create a new classone object.

	double localResult = classOneObject.studentProfessorRatio(); //compute in classOneObject and print.
	localResult += classTwoObject.studentProfessorRatio(); //compute in classTwoObject, print, and add.
	classOneObject.setStudentAndProfessorValues(20, 10); //set new values in classOneObject.
	localResult += classOneObject.studentProfessorRatio(); //compute in classOneObject again.
	printf("------------\n");

	classOneObject = *newClassOneObject; //copy newClassOneObject into classOneObject.
	delete newClassOneObject; //delete the pointer to newClassOneObject.
	classOneObject.studentProfessorRatio(); //compute in classOne again and print.
	printf("------------\n");

	classTwoObject.setStudentAndProfessorValues(classOneObject.getStudents(),classOneObject.getProfessors()); //assign values by pass by reference.
	classTwoObject.studentProfessorRatio(); //compute in classTwo and print.

	return 0;
}