#include <iostream>
#include <cstring>
#include <string>
using namespace std; 
const int SIZE = 60;
int maxint(long int[], int);





int main()
{
    setlocale(0, "");
    long int mas[SIZE];
    bool flag = true;
    int i = 0;
    cout << "Введите числа " << endl;
    while (flag == true) {
        cin >> mas[i];
        cout << "Хотите продолжить?";
        char reshe = 'Y';
        cin >> reshe;
        if (reshe == 'Y') i++;
        if (reshe == 'N') flag = false;
    
    }
    int index_1 = maxint(mas, i);
    cout << "Индекс наибольшего элемента равен " << index_1 << "\nЗначение наибольшего элемента равно " << mas[index_1] << endl;
}

int maxint(long int mas[], int len) {
    int max = 0;
    int index = 0; 
    for (int j = 0; j <= len + 1; j++) {
        if (int(mas[j]) > max) { max = int(mas[j]); index = j; }
    }
    return index;
}
