#include <iostream>
using namespace std;
void zeroSmaller(int&, int&);



int main()
{
    int num1, num2;
    cin >> num1 >> num2; 
    zeroSmaller(num1, num2);
}



void zeroSmaller(int& a, int& b) {
    if (a < b) a = 0;
    else b = 0;
}

