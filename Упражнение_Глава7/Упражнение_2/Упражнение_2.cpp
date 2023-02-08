#include <iostream>
#include <string>
#include <cstring>

using namespace std;




class employy {
private:
    string name;
    long number; 
 
public:
    employy() : name("None"), number(0) {}
    void getData(){
        cin >> number; 
        cin >> name;
    }
    void pullData() {
        cout << "Номер служащего " << number << " , имя работника " << name << endl; 
    }

};



int main()
{
    setlocale(0, "");
    employy mas[100]; 
    bool flag = true;
    static int i = 0;
    while (flag) {
        cout << "Введите данные пользователя(НОМЕР, ИМЯ): ";
        mas[i].getData();
        cout << "Хоитите продолжить? "; 
        char reshe = 'Y';
        cin >> reshe; 
        if (reshe == 'Y') i++;
        if (reshe == 'N') break;    
    }
    for (int j = 0; j <= i; j++) {
        mas[j].pullData();      
    }








}
