#pragma once
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

class Shape
{
protected:
	float width;
	float height;
	float area = 0;
	virtual float calculaterArea() = 0;

public:
	Shape(float _width, float _height);
};

class Rectangle : public Shape
{
public:
	Rectangle(float _width, float _height);
	virtual float calculaterArea() override;
};

class Circle : public Shape
{
private:
	float radius;

public:
	Circle(float _width, float _height, float _radius);
	virtual float calculaterArea() override;
};

void openClosed();