#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std; 



int main() {

	unsigned long chislo = 0;
	for (int i = 5; i != -1; i--) {
		char symbol = _getche();
		int tmp = symbol - '0';
		chislo += (pow(10, i) * tmp);
		if (i == 0)
			cout << endl << chislo;
	}
	
	
	
	



}