#include "1SingleResponsibility.h"

void PlayerInput::playerInput()
{
	cout << "Input 실행" << endl;
}

void PlayerMovement::playerMovement()
{
	cout << "Movement 실행" << endl;
}

void PlayerAudio::playerAudio()
{
	cout << "Audio 실행" << endl;
}

void singleResponsibility()
{
	cout << "1. 단일 책임 원칙을 실행합니다.\n" << endl;

	PlayerInput plaplayerInput;
	plaplayerInput.playerInput();

	PlayerMovement playerMovement;
	playerMovement.playerMovement();

	PlayerAudio playerAudio;
	playerAudio.playerAudio();

	cout << endl;
}