#pragma once
#include <iostream>
#include <string>
using namespace std;

//ÉùÃ÷Àà
class CStudent
{
	public:
		void setinfo(string N, int I, char S, int A);
		void setgrad(float course1, float course2, float course3);
		float avg();
		void display();
	private:
		string name;
		int id, age;
		char sex;
		float grade[3];
};