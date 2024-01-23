#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int ml1, ml2, ml3, bestM;
	float salary1, salary2, salary3;


	cout << "----------------------------------------"<< endl;
	cout << "Введите уровень продаж 1-го менеджера: ";
	cin >> ml1;

	cout << "Введите уровень продаж 2-го менеджера: ";
	cin >> ml2;

	cout << "Введите уровень продаж 3-го менеджера: ";
	cin >> ml3;
	cout << "----------------------------------------" << endl;


	if (ml1 < 500)
	{
		salary1 = 200 + ml1 * 0.003;
	}
	else if ((ml1 >= 500) && (ml1 < 1000))
	{
		salary1 = 200 + ml1 * 0.005;
	}
	else
	{
		salary1 = 200 + ml1 * 0.008;
	}


	if (ml2 < 500)
	{
		salary2 = 200 + ml2 * 0.003;
	}
	else if ((ml2 >= 500) && (ml2 < 1000))
	{
		salary2 = 200 + ml2 * 0.005;
	}
	else
	{
		salary2 = 200 + ml2 * 0.008;
	}


	if (ml3 < 500)
	{
		salary3 = 200 + ml3 * 0.003;
	}
	else if ((ml3 >= 500) && (ml3 < 1000))
	{
		salary3 = 200 + ml3 * 0.005;
	}
	else
	{
		salary3 = 200 + ml3 * 0.008;
	}


	if (ml1 > ml2)
	{
		bestM = 1;
	}
	else
	{
		bestM = 2;
	}

	if (ml3 > bestM)
	{
		bestM = 3;
	}

	switch (bestM)
	{
	case 1:
		salary1 = salary1 + 200;
		break;

	case 2:
		salary2 = salary2 + 200;
		break;

	case 3:
		salary3 = salary3 + 200;
		break;
	}
	
	cout << "Лучший — " << bestM;
	cout << " менеджер. Премию ему!\n";
	cout << "Зарплата 1-ого менеджера: " << salary1;
	cout << "\n";
	cout << "Зарплата 2-ого менеджера: " << salary2;
	cout << "\n";
	cout << "Зарплата 3-ого менеджера: " << salary3;
	cout << "\n";
	cout << "----------------------------------------" << endl;

	return 0;
}