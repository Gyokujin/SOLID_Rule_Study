#include <iostream>
#include "1SingleRresponsibility.h"
#include "2OpenClosed.h"
using namespace std;

int main()
{
	while (true)
	{
		int input;
		cout << "솔리드 원칙에는 다섯가지가 있습니다." << endl;
		cout << "1. 단일 책임 원칙\n" << endl;

		cout << "어떤 원칙을 실행하시겠습니까? (0을 입력시 종료됩니다.) ";
		cin >> input;

		if (input == 0)
		{
			cout << "프로그램을 종료합니다." << endl;
			break;
		}

		switch (input)
		{
		case 1:
			cout << "1. 단일 책임 원칙을 실행합니다.\n" << endl;

			PlayerInput playerInput;
			playerInput.playerInput();

			PlayerMovement playerMovement;
			playerMovement.playerMovement();

			PlayerAudio playerAudio;
			playerAudio.playerAudio();

			break;

		case 2:
			cout << "2. 개방 폐쇄 원칙을 실행합니다.\n" << endl;

			Rectangle rectAngle;
			rectAngle.calculaterArea();

			break;

		/*default:
			cout << "올바른 번호를 입력해주세요.\n" << endl;
			break;*/
		}
	}

	return 0;
}