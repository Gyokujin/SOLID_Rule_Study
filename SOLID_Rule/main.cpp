#include <iostream>
#include "1SingleRresponsibility.h"
#include "2OpenClosed.h"
using namespace std;

int main()
{
	while (true)
	{
		int input;
		cout << "�ָ��� ��Ģ���� �ټ������� �ֽ��ϴ�." << endl;
		cout << "1. ���� å�� ��Ģ\n" << endl;

		cout << "� ��Ģ�� �����Ͻðڽ��ϱ�? (0�� �Է½� ����˴ϴ�.) ";
		cin >> input;

		if (input == 0)
		{
			cout << "���α׷��� �����մϴ�." << endl;
			break;
		}

		switch (input)
		{
		case 1:
			cout << "1. ���� å�� ��Ģ�� �����մϴ�.\n" << endl;

			PlayerInput playerInput;
			playerInput.playerInput();

			PlayerMovement playerMovement;
			playerMovement.playerMovement();

			PlayerAudio playerAudio;
			playerAudio.playerAudio();

			break;

		case 2:
			cout << "2. ���� ��� ��Ģ�� �����մϴ�.\n" << endl;

			Rectangle rectAngle;
			rectAngle.calculaterArea();

			break;

		/*default:
			cout << "�ùٸ� ��ȣ�� �Է����ּ���.\n" << endl;
			break;*/
		}
	}

	return 0;
}