#pragma once
class Triangle
{
private:
	double a, b, c;

public:
	void setA(double);
	double getA();
	void setB(double);
	double getB();
	void setC(double);
	double getC();

	double countFigureArea();
	double countFigurePerimeter();

	Triangle();
	Triangle(double, double, double);
	~Triangle();
};

