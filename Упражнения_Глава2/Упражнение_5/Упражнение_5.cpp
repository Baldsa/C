#include <iostream>
#include <CTYPE.h>
using namespace std;


bool define_symbol(char symbol) {
    char buckva = symbol;
    return islower(buckva);
}


int main()
{
    setlocale(LC_ALL, "RU");
    char symbol;
    cin >> symbol;
    if (define_symbol(symbol) == true) {
        cout << "Вы ввели строчную букву" << endl;
    }
    else{
        cout << "Вы ввели заглавную букву" << endl;
    }
        
   
}

