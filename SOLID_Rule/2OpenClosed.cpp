#include "2OpenClosed.h"

Shape::Shape(float _width, float _height) : width(_width), height(_height) {}
Rectangle::Rectangle(float _width, float _height) : Shape(_width, _height) {}
Circle::Circle(float _width, float _height, float _radius) : Shape(_width, _height), radius(_radius) {}

float Rectangle::calculaterArea()
{
	area = width * height;
	cout << "�ش� �簢���� ���̴� " << area << endl;
	return area;
}

float Circle::calculaterArea()
{
	area = radius * radius * M_PI;
	cout << "�ش� ���� ���̴� " << area << endl;
	return area;
}

void openClosed()
{
	cout << "2. ���� ��� ��Ģ�� �����մϴ�.\n" << endl;

	cout << "ù��° ���� �簢���� ������ �Է��մϴ�. �ʺ�, ���̸� ������� �Է��ϼ���. ";
	float input1 = 0, input2, input3 = 0;
	cin >> input1 >> input2;

	Rectangle rectAngle(input1, input2);
	rectAngle.calculaterArea();
	cout << endl;

	cout << "�ι�° ���� ���� ������ �Է��մϴ�. �������� �Է��ϼ���. ";
	cin >> input3;

	Circle circle(input1, input2, input3);
	circle.calculaterArea();
	cout << endl;
}