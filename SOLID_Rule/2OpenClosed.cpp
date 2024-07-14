#include "2OpenClosed.h"

Shape::Shape(float _width, float _height) : width(_width), height(_height) {}
Rectangle::Rectangle(float _width, float _height) : Shape(_width, _height) {}
Circle::Circle(float _width, float _height, float _radius) : Shape(_width, _height), radius(_radius) {}

float Rectangle::calculaterArea()
{
	area = width * height;
	cout << "해당 사각형의 넓이는 " << area << endl;
	return area;
}

float Circle::calculaterArea()
{
	area = radius * radius * M_PI;
	cout << "해당 원의 넓이는 " << area << endl;
	return area;
}

void openClosed()
{
	cout << "2. 개방 폐쇄 원칙을 실행합니다.\n" << endl;

	cout << "첫번째 도형 사각형의 정보를 입력합니다. 너비, 높이를 순서대로 입력하세요. ";
	float input1 = 0, input2, input3 = 0;
	cin >> input1 >> input2;

	Rectangle rectAngle(input1, input2);
	rectAngle.calculaterArea();
	cout << endl;

	cout << "두번째 도형 원의 정보를 입력합니다. 반지름을 입력하세요. ";
	cin >> input3;

	Circle circle(input1, input2, input3);
	circle.calculaterArea();
	cout << endl;
}