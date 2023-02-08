#include <iostream>
using namespace std;
int main()
{
		int x = 1;
		int space = 38;
		while (x != 39)
		{
			for (int i = 0; i != space / 2; i++)cout << ' ';
			for (int i = 0; i != x; i++) cout << '/';
			for (int i = 0; i != space / 2; i++) cout << ' ';
			x += 2;
			space -= 2;
			cout << endl;
		}
}

