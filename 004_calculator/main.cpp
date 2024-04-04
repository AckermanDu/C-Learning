#include <iostream>
using namespace std;


class calc
{
public:
	int num1, num2;
	virtual int getResult(int n1,int n2)
	{
		return 0;
	}
};

class add :public calc
{
public:
	int getResult(int n1,int n2)
	{
		return n1 + n2;
	}
};

class sub :public calc
{
public:
	int getResult(int n1, int n2)
	{
		return n1 - n2;
	}
};

class multi :public calc
{
public:
	int getResult(int n1, int n2)
	{
		return n1 * n2;
	}
};

void test(calc& c2)
{
	c2.num1 = 10;
	c2.num2 = 5;
	cout << c2.num1 << "-" << c2.num2 << "=" << c2.getResult(c2.num1, c2.num2) << endl;
}

int main()
{
	//动态多态的条件
	//1.使用父类指针指向子类对象
	calc* c1 = new add;
	c1->num1 = 5;
	c1->num2 = 10;
	cout << c1->num1 << "+" << c1->num2 << "=" << c1->getResult(c1->num1,c1->num2) << endl;

	delete c1;

	//2.使用父类引用指向子类对象
	sub s;
	test(s);

	return 0;
}