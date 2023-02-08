#include <iostream>
#include <iomanip>
using namespace std; 




int main()
{
	setlocale(LC_ALL, "RU");
	long pop1 = 8425785, pop2 = 47, pop3 = 9761;
	cout << setw(5) << setfill('.') << "Город" << setw(12)
		<< "Население" << endl
		<< setfill('.') << "Москва" << setw(12) << setfill('.') << pop1 << endl
		<< setfill('.') << "Киров" << setw(12) << setfill('.') << pop2 << endl
		<< setw(9) << setfill('.') << "Угрюмовка" << setw(12) << setfill('.') << pop3 << endl;
}
