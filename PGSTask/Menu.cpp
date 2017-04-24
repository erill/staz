#include "stdafx.h"
#include "Menu.h"
#include <iostream>
#include <string>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;


void Menu::userMenu()
{
	string choice;
	string a, b, c;
	double a2, b2, c2;
	Rectangle *rectangle = NULL;
	Triangle *triangle = NULL;

	do 
	{
		cout << "Select the action you want to perform and press Enter to confirm.\n";
		cout << "1 - Count the area and perimeter of the rectangle\n";
		cout << "2 - Count the area and perimeter of the trianagle\n";
		cout << "3 - Exit\n";
		cin >> choice;
		if (choice.length() > 1)
		{
			cout << endl << "Incorrect input. You can olny choose actions from 1 to 3.\n";
			system("pause");
			system("cls");
		}
		else
		{
			const char* sign = choice.data();
			switch (*sign)
			{
			case '1':
				cout << "Specify the length of the sides of the figure. \nThey can only be non-negative numbers.\n\n";
				cout << "A: ";
				cin >> a;
				cout << "B: ";
				cin >> b;
				try {
					a2 = stod(a);
					b2 = stod(b);
					if (a2 <= 0 || b2 <= 0)
					{
						cout << "Incorrect data. You can only put non-negatives numbers.\n\n";
						system("pause");
						system("cls");
					}
					else
					{
						delete rectangle;
						rectangle = NULL;
						rectangle = new Rectangle(a2, b2);
					//	r->setA(a2);
					//	r->setB(b2);
						cout << "Area of the figure: " << rectangle->countFigureArea() << "\n";
						cout << "Perimeter of the figure: " << rectangle->countFigurePerimeter() << "\n\n";
						system("pause");
						system("cls");
					}
				}
				catch (invalid_argument) {
					cout << "Incorrect data. You can only put non-negatives numbers.\n\n";
					system("pause");
					system("cls");
				} 
				catch (out_of_range) {
					cout << "Input out of range representable by doubles. The range of values you can put is <" << DBL_MIN << "," << DBL_MAX << ">.\n\n";
					system("pause");
					system("cls");
				}
				break;
			case '2':
				cout << "Specify the length of the sides of the figure. \nThey can only be non-negative numbers.\n";
				cout << "A: ";
				cin >> a;
				cout << "B: ";
				cin >> b;
				cout << "C: ";
				cin >> c;
				try {
					a2 = stod(a);
					b2 = stod(b);
					c2 = stod(c);
					if (a2 <= 0 || b2 <= 0 || c2 <= 0)
					{
						cout << "Incorrect data. You can only put non-negatives numbers.\n\n";
						system("pause");
						system("cls");
					}
					else
					{
						if (a2 > (b2 + c2) || b2 > (a2 + c2) || c2 > (a2 + b2))
						{
							cout << "Unfulfilled triangle inequality. \nThe sides must meet the following conditions: \n";
							cout << "a + b > c\n";
							cout << "a + c > b\n";
							cout << "c + b > a\n\n";
							system("pause");
							system("cls");
						}
						else
						{
							delete triangle;
							triangle = NULL;
							triangle = new Triangle(a2, b2, c2);
							//t->setA(a2);
							//t->setB(b2);
							//t->setC(c2);
							cout << "Area of the figure: " << triangle->countFigureArea() << "\n";
							cout << "Perimeter of the figure: " << triangle->countFigurePerimeter() << "\n\n";
							system("pause");
							system("cls");
						}
					}
				}
				catch (invalid_argument) {
					cout << "Incorrect data. You can only put non-negatives numbers.\n\n";
					system("pause");
					system("cls");
				}
				catch (out_of_range) {
					cout << "Input out of range representable by doubles. The range of values you can put is <" << DBL_MIN << "," << DBL_MAX << ">.\n\n";
					system("pause");
					system("cls");
				}
				break;
			case '3':
				cout << "End of program.\n";
				delete rectangle;
				delete triangle;
				break;
			default:
				cout << "Incorrect input. You can olny choose actions from 1 to 3.\n\n";
				system("pause");
				system("cls");
				break;
			}
		}
	} while (choice != "3");
}

Menu::Menu()
{
}


Menu::~Menu()
{
}
