#include <iostream>
using namespace std;

//һά��̬����
void test1()
{
	int n = 0;
	cin >> n;

	int* p = new int[n];
	for (int i = 0; i < n; i++)
	{
		*(p + i) = i+1;
	}

}


//��ά��̬����  ��
void test2()
{
	int row, col = 0;
	cin >> row;
	cin >> col;

	int** p=new int* [row];
	
	//�����ڴ�ռ�
	for (int i = 0; i < row; i++) {
		*(p+i) = new int[col];
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			*(*(p + i) + j) = i + j;
		}
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++) {
			cout << *(*(p + i) + j)<<"  ";
		}
		cout << endl;
	}

}



int main()
{
	//test1();
	test2();

	return 0;
}