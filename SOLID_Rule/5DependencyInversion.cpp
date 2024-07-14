#include "5DependencyInversion.h"

void Door::Open()
{
	cout << "문을 엽니다." << endl;
}

void Door::Close()
{
	cout << "문을 닫습니다." << endl;
}

bool ISwitchable::getIsAct()
{
	return isAct;
}

void ISwitchable::setIsAct(bool _act)
{
	isAct = _act;
}

void ISwitchable::activate()
{
	setIsAct(true);
}

void ISwitchable::deActivate()
{
	setIsAct(false);
}

void Door::activate()
{
	setIsAct(true);
	cout << "The door is open." << endl;
}

void Door::deActivate()
{
	setIsAct(false);
	cout << "The door is close." << endl;
}

void Switch::Toggle()
{
	if (client->getIsAct())
	{
		client->deActivate();
	}
	else
	{
		client->activate();
	}
}

void dependencyInversion()
{
	cout << "5. 의존성 역전 원칙을 실행합니다.\n" << endl;

	Door door;
	Switch switch1;

	switch1.client = &door;
	switch1.Toggle();

	cout << endl;
}