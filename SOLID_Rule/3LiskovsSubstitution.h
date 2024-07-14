#pragma once
#include <iostream>
using namespace std;

class IMovable
{
protected:
	virtual void Movable() = 0;
};

class ITurnable
{
protected:
	virtual void Turnable() = 0;
};

class RoadVehicle : public IMovable, public ITurnable
{
public:
	void Movable() override;
	void Turnable() override;

	void GoForward();
	void Reverse();
};

void liskovsSubstitution();