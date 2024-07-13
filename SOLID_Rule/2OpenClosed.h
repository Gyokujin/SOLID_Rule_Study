#pragma once
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

class Shape
{
protected:
	float width = 3;
	float height = 3;
	float area = 0;

public:
	virtual float calculaterArea() = 0;
};

class Rectangle : public Shape
{
private:
	float radius = 4;

public:
	virtual float calculaterArea();
};