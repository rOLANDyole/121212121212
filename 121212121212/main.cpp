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
	cout << "Выберете вариант калькулятора: \n";
	cout << "=========================================================================================================\n";
	cout << "1 - Калькулятор:\n2 - Калькулятор квадратных уравнений:\n";
	cout << "=========================================================================================================\n";
	cin >> variable;
	cout << "=========================================================================================================\n";
	if (variable = 1)
	{
		cout << "Введите первое число\n";
		cin >> FirstNumber;
		cout << "Введите второе число\n";
		cin >> SecondNumber;
		cout << "1 - Сумма:\n2 - Разность:\n3 - Произведение:\n4 - Деление:\n";
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