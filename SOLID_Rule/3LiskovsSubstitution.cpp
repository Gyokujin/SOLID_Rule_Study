#include "3LiskovsSubstitution.h"

void IMovable::Movable()
{
	cout << "이동이 가능하다." << endl;
}

void ITurnable::Turnable()
{
	cout << "회전이 가능하다." << endl;
}

void RoadVehicle::Movable()
{
	cout << "이 차량은 이동이 가능하다." << endl;
}

void RoadVehicle::Turnable()
{
	cout << "이 차량은 회전이 가능하다." << endl;
}

void RoadVehicle::GoForward()
{
	cout << "앞으로 직진한다." << endl;
}

void RoadVehicle::Reverse()
{
	cout << "뒤집는다." << endl;
}

void liskovsSubstitution()
{
	cout << "3. 리스코프 치환 원칙을 실행합니다.\n" << endl;

	RoadVehicle roadVehicle;
	roadVehicle.Movable();
	roadVehicle.Turnable();
	roadVehicle.GoForward();
	roadVehicle.Reverse();

	cout << endl;
}