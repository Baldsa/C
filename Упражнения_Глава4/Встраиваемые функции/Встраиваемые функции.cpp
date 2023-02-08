
#include <iostream>
using namespace std; 
inline float lsbkg(float pounds) {
    return 0.453592 * pounds;
        
}
int main()
{
    setlocale(0, "");
    float lsb; 
    cout << "Введите вес в фунтах ";
    cin >> lsb; 
    cout << " " << lsbkg(lsb) << endl;
    return 0;
}

