#ifndef PERSON_H_INCLUDED//include guards use preprocessor
#define PERSON_H_INCLUDED//definitions to prevent multiple inclusions

#include <string>
#include <iostream>
using namespace std;

class Person
{
	public://public members are available everywhere
		Person();//public empty constructor
		Person(string pname, int page);//public constructor with parameters
		string getName() const;//name "getter" (accessor)
		void setName( string name );//name "setter" (mutator)
		void setAge( int age );//age "setter" (mutator)
		int getAge() const;//age "getter" (accessor)
		void print() const;//print function

	private://only available within the class itself
		string name;
		int age;
};

#endif // PERSON_H_INCLUDED
