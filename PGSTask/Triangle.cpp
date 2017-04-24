#include "stdafx.h"
#include "Triangle.h"
#include <math.h>


void Triangle::setA(double a)
{
	this->a = a;
}

double Triangle::getA()
{
	return a;
}

void Triangle::setB(double b)
{
	this->b = b;
}

double Triangle::getB()
{
	return b;
}

void Triangle::setC(double c)
{
	this->c = c;
}

double Triangle::getC()
{
	return c;
}

double Triangle::countFigureArea()
{
	double p = (a + b + c) / 2;
	return sqrt(p*(p - a)*(p - b)*(p - c));
}

double Triangle::countFigurePerimeter()
{
	return a+b+c;
}

Triangle::Triangle()
{
}

Triangle::Triangle(double a, double b, double c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

Triangle::~Triangle()
{
}
