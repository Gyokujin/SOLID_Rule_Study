#pragma once
#include <iostream>
using namespace std;

class IEnemyMove
{
protected:
	float moveSpeed;
	float accelSpeed;

public:
	IEnemyMove(float _moveSpeed, float _accelSpeed);

	float getMoveSpeed();
	void setMoveSpeed(float _moveSpeed);

	float getAccelSpeed();
	void setAccelSpeed(float _accelSeped);

	void goForward();
	void reverse();
};

class IEnemyDamage
{
protected:
	float health;
	int defense;

public:
	IEnemyDamage(float _health, int _defense);

	float getHealth();
	void setHealth(float _health);

	int getDefense();
	void setDefense(int _defense);

	void takeDamage(int _damage);
	void restoreHealth(int _heal);
	void die();
};

class IEnemyStats
{
protected:
	int str;
	int dex;
	int stamina;

public:
	IEnemyStats(int _str, int _dex, int _stamina);

	int getStr();
	void setStr(int _str);

	int getDex();
	void setDex(int _dex);

	int getStamina();
	void setStamina(int _stamina);
};

class Enemy : public IEnemyMove, public IEnemyDamage, public IEnemyStats
{
public:
	Enemy(float _moveSpeed, float _accelSpeed, float _health, int _defense, int _str, int _dex, int _stamina);

	void ShowStatus();
};

void interfaceSegregation();