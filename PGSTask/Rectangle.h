#pragma once
class Rectangle
{
private:
	double a, b;

public:
	void setA(double);
	double getA();
	void setB(double);
	double getB();

	double countFigureArea();
	double countFigurePerimeter();

	Rectangle();
	Rectangle(double, double);
	~Rectangle();
};

