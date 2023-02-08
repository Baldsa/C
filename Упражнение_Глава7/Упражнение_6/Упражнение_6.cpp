#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std; 

class money {
private: 
    long double summa; 
public: 
    long double mstold(wchar_t[]);
};


long double money::mstold(wchar_t str[]) {
    wchar_t temp[80];
    int j = 0;
    for (int i = 0; i < wcslen(str); i++) {
        wchar_t ch = str[i];
        if (ch >= '0' && ch <= '9'){
            temp[j++] = ch;
        
        }
        else if (ch == '.'){
            temp[j++] = ch;
        }
    
    
    }
    temp[j++] = '\0';
    wchar_t* stop;
    summa = wcstold(temp, &stop);
    return summa; 

}


int main()
{
    setlocale(0, "");
    const int SIZE = 90;
    wchar_t stroka[SIZE];
    money ms;
    wchar_t ans;
    bool flag = true;
    long double res;
    while (flag) {
        cout << "Введите число:(Пример:$1,234,567.99)";
        wcin >> stroka;
        res = ms.mstold(stroka);
        wcout << L"Число типа long double: " << setiosflags(ios::fixed)
            << setprecision(2) << res << endl;
        wcout << L"Продолжить (Y/N)? "; wcin >> ans;
        if (ans == 'Y') {
            continue;
        }
        else {
            break;
        }
    }
}