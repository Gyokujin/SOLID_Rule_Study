#pragma once
#include <iostream>
using namespace std;

class ISwitchable
{
private:
	bool isAct;

public:
	bool getIsAct();
	void setIsAct(bool _act);
	virtual void activate() = 0;
	virtual void deActivate() = 0;
};

class Switch
{
public:
	ISwitchable* client;
	void Toggle();
};

class Door : public ISwitchable
{
public:
	void Open();
	void Close();
	void activate() override;
	void deActivate() override;
};

void dependencyInversion();