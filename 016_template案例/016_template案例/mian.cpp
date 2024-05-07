#include "myArray.hpp"

void test1()
{
	MyArray<int> arr1(5);
	MyArray<int> arr2(arr1);
}

int main()
{
	test1();

	return 0;
}