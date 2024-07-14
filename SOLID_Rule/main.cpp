#include <iostream>
#include "1SingleResponsibility.h"
#include "2OpenClosed.h"
#include "3LiskovsSubstitution.h"
#include "4InterfaceSegregation.h"
#include "5DependencyInversion.h"
using namespace std;

int main()
{
	while (true)
	{
		int input;
		cout << "솔리드 원칙에는 다섯가지가 있습니다." << endl;
		cout << "1. 단일 책임 원칙\n2. 개방 폐쇄 원칙\n3. 리스코프 치환 원칙\n4. 인터페이스 분리 원칙\n5. 의존성 역전 원칙\n" << endl;

		cout << "어떤 원칙을 실행하시겠습니까? (0을 입력시 종료됩니다.) ";
		cin >> input;
		cout << endl;

		if (input == 0)
		{
			cout << "프로그램을 종료합니다." << endl;
			break;
		}

		switch (input)
		{
		case 1:
			singleResponsibility();
			break;

		case 2:
			openClosed();
			break;

		case 3:
			liskovsSubstitution();
			break;

		case 4:
			interfaceSegregation();
			break;

		case 5:
			dependencyInversion();
			break;
		default:
			cout << "올바른 번호를 입력해주세요.\n" << endl;
			break;
		}
	}

	return 0;
}