
#include <iostream>
using namespace std; 



class object {
    
private:
    static int count_objects;
    int number = 0;

public:
    object() { count_objects++; number = count_objects; }
    void display() {
        cout << "Порядковый номер равен " << number << endl;
    }
};


int object::count_objects = 0;

int main()
{
    setlocale(0, "");
    object f1, f2, f3;
    f1.display();
    f2.display();
    f3.display();
}

