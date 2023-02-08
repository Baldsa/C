#include <iostream>
using namespace std; 





class employee {
private:
    int number;
    float summary;
public:
    void get_info(int us_number, float us_symmary) {
        number = us_number;
        summary = us_symmary;
    }
    void display() {
        cout << "Number of employee  " << number << " his/her symmary " << summary << endl;
    }
};







int main()
{
    employee num1;
    int a, b;
    cout << "Enter number of employee and his/her symmary ";
    cin >> a >> b;
    num1.get_info(a, b);
    cout << "Another employee(Y) or you want exit(N)?";
    num1.display();
}

