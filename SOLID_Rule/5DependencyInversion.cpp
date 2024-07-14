#include "5DependencyInversion.h"

void Door::Open()
{
	cout << "���� ���ϴ�." << endl;
}

void Door::Close()
{
	cout << "���� �ݽ��ϴ�." << endl;
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
	cout << "5. ������ ���� ��Ģ�� �����մϴ�.\n" << endl;

	Door door;
	Switch switch1;

	switch1.client = &door;
	switch1.Toggle();

	cout << endl;
}