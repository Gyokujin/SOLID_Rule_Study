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
	cout << "�ش� ���ʹ� ������ " << moveSpeed * accelSpeed << "��ŭ �̵��ߴ�." << endl;
}

void IEnemyMove::reverse()
{
	cout << "�ش� ���ʹ� �ڷ� " << getMoveSpeed() << "��ŭ �̵��ߴ�." << endl;
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
		cout << "�ش� ���ʹ� " << damage << "�� ���ظ� �Ծ���.  ";
		setHealth(getHealth() - damage);
		cout << "���� ü�� : " << getHealth() << endl;

		if (getHealth() <= 0)
			die();
	}
	else
	{
		cout << "�ش� ������ ������ ���Ƽ� ���ظ� ���� �ʾҴ�." << endl;
	}
}

void IEnemyDamage::restoreHealth(int _heal)
{
	cout << "�ش� ���ʹ� " << _heal << "��ŭ ȸ���ߴ�.  ";
	cout << "���� ü�� : " << getHealth() << endl;
}

void IEnemyDamage::die()
{
	cout << "�ش� ���͸� �����ƴ�" << endl;
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
	cout << "�̵��ӵ� : " << getMoveSpeed() << endl;
	cout << "���ӵ� : " << getAccelSpeed() << endl;
	cout << "ü�� : " << getHealth() << endl;
	cout << "���� : " << getDefense() << endl;
	cout << "�� : " << getStr() << endl;
	cout << "��ø�� : " << getDex() << endl;
	cout << "���׹̳� : " << getStamina() << endl << endl;
}

void interfaceSegregation()
{
	cout << "4. �������̽� �и� ��Ģ�� �����մϴ�.\n" << endl;
	float input1, input2, input3;
	int input4, input5, input6, input7;

	cout << "������ ������ �Է��մϴ�. ���� �̵� �����Դϴ�. " << "�̵��ӵ��� ���ӵ��� ���ʴ�� �Է��ϼ���. ";
	cin >> input1 >> input2;

	cout << "������ ���� ���� �����Դϴ�. " << "ü�°� ������ ���ʴ�� �Է��ϼ���. ";
	cin >> input3 >> input4;

	cout << "������ �ֿ� �ɷ�ġ �����Դϴ�. " << "��, ��ø��, ���׹̳��� ���ʴ�� �Է��ϼ���. ";
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