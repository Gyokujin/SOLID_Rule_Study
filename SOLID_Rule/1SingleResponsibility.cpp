#include "1SingleResponsibility.h"

void PlayerInput::playerInput()
{
	cout << "Input ����" << endl;
}

void PlayerMovement::playerMovement()
{
	cout << "Movement ����" << endl;
}

void PlayerAudio::playerAudio()
{
	cout << "Audio ����" << endl;
}

void singleResponsibility()
{
	cout << "1. ���� å�� ��Ģ�� �����մϴ�.\n" << endl;

	PlayerInput plaplayerInput;
	plaplayerInput.playerInput();

	PlayerMovement playerMovement;
	playerMovement.playerMovement();

	PlayerAudio playerAudio;
	playerAudio.playerAudio();

	cout << endl;
}