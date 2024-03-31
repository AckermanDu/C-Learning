#include "rectangle.h"

Crectangle::Crectangle(int x, int y,int w,int h)
{
	lt[0] = x;
	lt[1] = y;
	width = w;
	height = h;
}

Crectangle::Crectangle(Crectangle& r)
{

	width = r.width;
	height = r.height;
}

void Crectangle::Move(int x,int y)
{
	lt[0] = x;
	lt[1] = y;
}

void Crectangle::ChangeSize(int w, int h)
{
	width = w;
	height = h;
}

int Crectangle::Area()
{
	return width * height;
}

Crectangle Crectangle::merge(Crectangle& r)  //���װ棬����ƴ�ӵľ�����ԭ�����ұ�
{
	Crectangle y(lt[0], lt[1], width + r.width, height);
	return y;
}
