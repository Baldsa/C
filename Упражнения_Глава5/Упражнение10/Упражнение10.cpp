#include <iostream>
using namespace std;


int count_call = 0;
void count_global();
void count_static();
int main()

{
	setlocale(0, "");
	//for (int i = 0; i < 15; i++) {count_global();}
	for (int i = 0; i < 15; i++) { count_static(); }
}

void count_global() {
	count_call++;
	cout << "Меня вызвали " << count_call << " раз" << endl;
}
void count_static() {
	static int coun;
	coun++;
	cout << "Меня вызвали " << coun << " раз" << endl;

}