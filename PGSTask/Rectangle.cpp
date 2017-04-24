#include "stdafx.h"
#include "Rectangle.h"


void Rectangle::setA(double a)
{
	this->a = a;
}

double Rectangle::getA()
{
	return a;
}

void Rectangle::setB(double b)
{
	this->b = b;
}

double Rectangle::getB()
{
	return b;
}

double Rectangle::countFigureArea()
{
	return a*b;
}

double Rectangle::countFigurePerimeter()
{
	return 2 * a + 2 * b;
}

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(double b, double c)
{
	this->a = c;
	this->b = b;
}


Rectangle::~Rectangle()
{
}
