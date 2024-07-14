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
		cout << "�ָ��� ��Ģ���� �ټ������� �ֽ��ϴ�." << endl;
		cout << "1. ���� å�� ��Ģ\n2. ���� ��� ��Ģ\n3. �������� ġȯ ��Ģ\n4. �������̽� �и� ��Ģ\n5. ������ ���� ��Ģ\n" << endl;

		cout << "� ��Ģ�� �����Ͻðڽ��ϱ�? (0�� �Է½� ����˴ϴ�.) ";
		cin >> input;
		cout << endl;

		if (input == 0)
		{
			cout << "���α׷��� �����մϴ�." << endl;
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
			cout << "�ùٸ� ��ȣ�� �Է����ּ���.\n" << endl;
			break;
		}
	}

	return 0;
}