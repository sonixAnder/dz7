#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int pID, dID, pAmount, dAmount, temp;
	float pPrice1,  pPrice2,  pPrice3,  pPrice4, selPPrice;
	float dPrice1,  dPrice2,  dPrice3, selDPrice;
	float sumOrder;

	pPrice1 = 6.75;
	pPrice2 = 8.95;
	pPrice3 = 14.5;
	pPrice4 = 10.25;

	dPrice1 = 1.79;
	dPrice2 = 2.5;
	dPrice3 = 3.09;

	sumOrder = 0;

	cout << "Пиццы:\n";
	cout << "---------------------------" << endl;
	cout << "1 - Сырная пицца $" << pPrice1 << "\n";
	cout << "2 - Гавайская пицца $" << pPrice2 << "\n";
	cout << "3 - Курица BBQ пицца $" << pPrice3 << "\n";
	cout << "4 - Пицца с Морепродуктами $" << pPrice4 << "\n";
	cout << "Выберите: ";
	cin >> pID;
	cout << "---------------------------" << endl;
	
	
	

	cout << "Сколько пицц пожелаете?: " << endl;
	cin >> pAmount;

	cout << "Напитки:\n";
	cout << "--------------------" << endl;
	cout << "1 - Пэпси (320мл) $" << dPrice1 << "\n";
	cout << "2 - Аквафина (320мл) $" << dPrice2 << "\n";
	cout << "3 - Фанта (1 литр) $" << dPrice3 << "\n";
	cout << "Выберите: ";
	cin >> dID;
	cout << "--------------------" << endl;
	

	cout << "Сколько напитков пожелаете?: " << endl;
	cin >> dAmount;

	switch (pID)
	{
	case 1:
		selPPrice = pPrice1;
		break;
	case 2:
		selPPrice = pPrice2;
		break;
	case 3:
		selPPrice = pPrice3;
		break;
	case 4:
		selPPrice = pPrice4;
		break;
	default:
		cout << "!Такой пиццы нет в меню, простите :(!\n";
		selPPrice = 0;
		break;
	}
	switch (dID)
	{
	case 1:
		selDPrice = dPrice1;
		break;
	case 2:
		selDPrice = dPrice2;
		break;
	case 3:
		selDPrice = dPrice3;
		break;
	default:
		cout << "!Такого напитка нету в меню, простите :(!\n";
		selDPrice = 0;
		break;
	}
	temp = pAmount;
	if (pAmount >= 5)
	{
		cout << "--------------------" << endl;
		cout << "Супер акция для тебя - каждая 5-ая пицца в подарок!\n";
		pAmount = pAmount - pAmount / 5;
	}
	sumOrder = sumOrder + pAmount * selPPrice;

	if ((dAmount >= 3) && (selDPrice > 2))
	{
		cout << "У тебя есть скидка (15%) на напитки!\n";
		sumOrder = sumOrder + dAmount * selDPrice * (1 - 0.15);
		cout << "--------------------" << endl;
	}
	else
	{
		sumOrder = sumOrder + dAmount * selDPrice;
	}

	if (sumOrder > 50)
	{
		cout << "--------------------" << endl;
		cout << "У тебя есть скидка (20%) на весь заказ!\n";
		cout << "--------------------" << endl;
		sumOrder = sumOrder * (1 - 0.2);
	}
	cout << "--------------------" << endl;
	cout << "Твой заказ:\n";

	cout << "Пицца" << pID << "-" << temp << "-$";
	cout << selPPrice << "\n" << endl;

	cout << "Напиток" << dID << "-";
	cout << dAmount << "-$" << selDPrice << "\n"<< endl;

	cout << "Сумма: $" << sumOrder << "\n";
	cout << "--------------------" << endl;
	cout << "Приятного аппетита!";
	return 0;

}