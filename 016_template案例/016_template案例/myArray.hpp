#pragma once
#include <iostream>
#include <string>

using namespace std;


template<class T>
class MyArray
{
public:
	MyArray(int num){
		this->m_num = num;
		p=new T[this->m_num];
	}

	MyArray(const MyArray& mA) {
		this->m_num = mA.m_num;
		//this->p = mA.p;   浅拷贝这样做，错误

		this->p = new T[this->m_num];
		for (int i = 0; i < this->m_num; i++)
		{
			this->p[i] = mA.p[i];
		}
	}

	MyArray& operator=(const MyArray& mA) {
		this->m_num = mA.MyArry;
		
		if (p != NULL) {
			delete[] p;
			p = NULL;
		}
		this->p = new T[this->m_num];
		for (int i = 0; i < this->m_num; i++)
		{
			this->p[i] = mA.p[i];
		}
		return *this;
	}

	~MyArray()
	{
		if (this->p != NULL) {
			delete[] this->p;
			this->p = NULL;
		}
	}



private:
	int m_num;
	T* p;
	int size;   //内存大小
};