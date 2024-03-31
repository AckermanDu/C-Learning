#include "rectangle.h"

int main()
{
	Crectangle r1(0, 1, 3, 1);
	Crectangle r2(3, 1, 2, 1);
	int s1 = r1.Area();
	int s2 = r2.Area();
	Crectangle r3(r1);
	r3 = r1.merge(r2);
	int s3 = r3.Area();

	cout << "s1:" << s1 << endl;
	cout << "s2:" << s2 << endl;
	cout << "s3:" << s3 << endl;

	return 0;
}