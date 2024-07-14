#include "4InterfaceSegregation.h"

IEnemyMove::IEnemyMove(float _moveSpeed, float _accelSpeed) : moveSpeed(_moveSpeed), accelSpeed(_accelSpeed) {}
IEnemyDamage::IEnemyDamage(float _health, int _defense) : health(_health), defense(_defense) {}
IEnemyStats::IEnemyStats(int _str, int _dex, int _stamina) : str(_str), dex(_dex), stamina(_stamina) {}

float IEnemyMove::getMoveSpeed()
{
	return moveSpeed;
}

void IEnemyMove::setMoveSpeed(float _moveSpeed)
{
	moveSpeed = _moveSpeed;
}

float IEnemyMove::getAccelSpeed()
{
	return accelSpeed;
}

void IEnemyMove::setAccelSpeed(float _accelSeped)
{
	accelSpeed = _accelSeped;
}

void IEnemyMove::goForward()
{
	cout << "해당 몬스터는 앞으로 " << moveSpeed * accelSpeed << "만큼 이동했다." << endl;
}

void IEnemyMove::reverse()
{
	cout << "해당 몬스터는 뒤로 " << getMoveSpeed() << "만큼 이동했다." << endl;
}

float IEnemyDamage::getHealth()
{
	return health;
}

void IEnemyDamage::setHealth(float _health)
{
	health = _health;
}

int IEnemyDamage::getDefense()
{
	return defense;
}

void IEnemyDamage::setDefense(int _defense)
{
	defense = _defense;
}

void IEnemyDamage::takeDamage(int _damage)
{
	int damage = _damage - getDefense();

	if (damage > 0)
	{
		cout << "해당 몬스터는 " << damage << "의 피해를 입었다.  ";
		setHealth(getHealth() - damage);
		cout << "남은 체력 : " << getHealth() << endl;

		if (getHealth() <= 0)
			die();
	}
	else
	{
		cout << "해당 몬스터의 방어력이 높아서 피해를 입지 않았다." << endl;
	}
}

void IEnemyDamage::restoreHealth(int _heal)
{
	cout << "해당 몬스터는 " << _heal << "만큼 회복했다.  ";
	cout << "남은 체력 : " << getHealth() << endl;
}

void IEnemyDamage::die()
{
	cout << "해당 몬스터를 물리쳤다" << endl;
}

int IEnemyStats::getStr()
{
	return str;
}

void IEnemyStats::setStr(int _str)
{
	str = _str;
}

int IEnemyStats::getDex()
{
	return dex;
}

void IEnemyStats::setDex(int _dex)
{
	dex = _dex;
}

int IEnemyStats::getStamina()
{
	return stamina;
}

void IEnemyStats::setStamina(int _stamina)
{
	stamina = _stamina;
}

Enemy::Enemy(float _moveSpeed, float _accelSpeed, float _health, int _defense, int _str, int _dex, int _stamina) : IEnemyMove(_moveSpeed, _accelSpeed), IEnemyDamage(_health, _defense), IEnemyStats(_str, _dex, _stamina)
{
	setMoveSpeed(_moveSpeed);
	setAccelSpeed(_accelSpeed);
	setHealth(_health);
	setDefense(_defense);
	setStr(_str);
	setDex(_dex);
	setStamina(_stamina);
}

void Enemy::ShowStatus()
{
	cout << "이동속도 : " << getMoveSpeed() << endl;
	cout << "가속도 : " << getAccelSpeed() << endl;
	cout << "체력 : " << getHealth() << endl;
	cout << "방어력 : " << getDefense() << endl;
	cout << "힘 : " << getStr() << endl;
	cout << "민첩성 : " << getDex() << endl;
	cout << "스테미나 : " << getStamina() << endl << endl;
}

void interfaceSegregation()
{
	cout << "4. 인터페이스 분리 원칙을 실행합니다.\n" << endl;
	float input1, input2, input3;
	int input4, input5, input6, input7;

	cout << "몬스터의 정보를 입력합니다. 먼저 이동 정보입니다. " << "이동속도와 가속도를 차례대로 입력하세요. ";
	cin >> input1 >> input2;

	cout << "다음은 전투 관련 정보입니다. " << "체력과 방어력을 차례대로 입력하세요. ";
	cin >> input3 >> input4;

	cout << "다음은 주요 능력치 정보입니다. " << "힘, 민첩성, 스테미나를 차례대로 입력하세요. ";
	cin >> input5 >> input6 >> input7;

	Enemy enemy(input1, input2, input3, input4, input5, input6, input7);
	enemy.ShowStatus();

	enemy.takeDamage(1);

	enemy.goForward();
	enemy.reverse();

	enemy.takeDamage(8);
	enemy.restoreHealth(5);
	enemy.ShowStatus();

	enemy.takeDamage(20);
	cout << endl;
}