#include "3LiskovsSubstitution.h"

void IMovable::Movable()
{
	cout << "�̵��� �����ϴ�." << endl;
}

void ITurnable::Turnable()
{
	cout << "ȸ���� �����ϴ�." << endl;
}

void RoadVehicle::Movable()
{
	cout << "�� ������ �̵��� �����ϴ�." << endl;
}

void RoadVehicle::Turnable()
{
	cout << "�� ������ ȸ���� �����ϴ�." << endl;
}

void RoadVehicle::GoForward()
{
	cout << "������ �����Ѵ�." << endl;
}

void RoadVehicle::Reverse()
{
	cout << "�����´�." << endl;
}

void liskovsSubstitution()
{
	cout << "3. �������� ġȯ ��Ģ�� �����մϴ�.\n" << endl;

	RoadVehicle roadVehicle;
	roadVehicle.Movable();
	roadVehicle.Turnable();
	roadVehicle.GoForward();
	roadVehicle.Reverse();

	cout << endl;
}