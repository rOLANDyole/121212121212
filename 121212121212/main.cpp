#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int variable;
	int SecondVariable;
	int a;
	int b;
	int c;
	double FirstNumber;
	double SecondNumber;
	cout << "�������� ������� ������������: \n";
	cout << "=========================================================================================================\n";
	cout << "1 - �����������:\n2 - ����������� ���������� ���������:\n";
	cout << "=========================================================================================================\n";
	cin >> variable;
	cout << "=========================================================================================================\n";
	if (variable = 1)
	{
		cout << "������� ������ �����\n";
		cin >> FirstNumber;
		cout << "������� ������ �����\n";
		cin >> SecondNumber;
		cout << "1 - �����:\n2 - ��������:\n3 - ������������:\n4 - �������:\n";
		cin >> SecondVariable;
		cout << "=========================================================================================================\n";
		if (SecondVariable = 1)
		{
			cout << FirstNumber + SecondNumber;
		}
		else if (SecondVariable = 2)
		{
			cout << FirstNumber - SecondNumber;
		}
		else if (SecondVariable = 3)
		{
			cout << FirstNumber * SecondNumber;
		}
		else if (SecondVariable = 4)
		{
			cout << FirstNumber / SecondNumber;
		}
	}

}