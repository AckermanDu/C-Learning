#pragma once
#include <iostream>

using namespace std;


class Crectangle
{
private:
	int width, height;
	int lt[2];
	int lb[2] = { lt[0],lt[1] - height };
	int rt[2] = { lt[0] + width,lt[1] };
	int rb[2] = { lt[0] + width,lt[1] - height };

public:
	Crectangle(int x, int y,int w,int h);
	Crectangle(Crectangle& r);
	void Move(int x, int y);
	void ChangeSize(int w, int h);
	int Area();
	Crectangle merge(Crectangle& r);
};