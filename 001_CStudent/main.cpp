#include "Student.h"

int main()
{
	CStudent s1, s2, * ps;
	CStudent& bs = s2;   //别名

	s1.setinfo("张三", 10001, 'm', 20);
	s1.setgrad(80.5, 96.0, 85.5);
	s1.display();

	ps = &s2;   //初始化对象指针
	ps->setinfo("李四", 10002, 'w', 21);
	ps->setgrad(84.0, 79.5, 90.5);
	ps->display();

	return 0;
}