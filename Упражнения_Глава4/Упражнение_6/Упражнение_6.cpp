

#include <iostream>
using namespace std;
#include <iomanip>
#include <conio.h>

enum etype { accountant, laborer, secretary, manager, executive, researcher};

int main()
{
	setlocale(0, "");
	etype chosen;
	char chosen_by_human;
	cout << "Введите первую букву профессии ";
	chosen_by_human = _getche();
	switch (chosen_by_human)
	{
	case 'a':
		chosen = accountant;
		break;
	case 'l':
		chosen = laborer;
		break;
	case 's':
		chosen = secretary;
		break;
	case 'm':
		chosen = manager;
		break;
	case 'e':
		chosen = executive;
		break;
	case 'r':
		chosen = researcher;
		break;
	}
	switch (chosen)
	{
	case 0:
		cout << "\nПолное название должности: accountant";
		break;
	case 1:
		cout << "\nПолное название должности: laborer";
		break;
	case 2:
		cout << "\nПолное название должности: secretary";
		break;
	case 3:
		cout << "\nПолное название должности: manager";
		break;
	case 4:
		cout << "\nПолное название должности: executive";
		break;
	case 5:
		cout << "\nПолное название должности: researcher";
		break;
	}
}
