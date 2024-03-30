#include "Student.h"

void CStudent::setinfo(string N, int I, char S, int A)
{
	name = N; id = I; sex = S; age = A;
}

void CStudent::setgrad(float course1, float course2, float course3)
{
	grade[0] = course1; grade[1] = course2; grade[2] = course3;
}

float CStudent::avg()
{
	return (grade[0] + grade[1] + grade[2]) / 3;
}

void CStudent::display()
{
	float average = avg();
	cout << "姓名:" << name << endl << "年龄:" << age << endl;
	cout << "平均分:" << average<<endl;
}
