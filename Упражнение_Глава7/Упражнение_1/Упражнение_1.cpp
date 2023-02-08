#include <iostream>
#include <cstring>
using namespace std; 
const int SIZE = 50;
void reverseit(char[]);



int main()
{
    char str[SIZE];
    cin.get(str,SIZE);
    reverseit(str);
    cout << str << endl;

 }

void reverseit(char stroka[]) {
    int len = strlen(stroka);
    for (int j = 0; j < len / 2; j++) {
        char temp = stroka[j];
        stroka[j] = stroka[len - j - 1];
        stroka[len - j - 1] = temp;  
    
    }




}
