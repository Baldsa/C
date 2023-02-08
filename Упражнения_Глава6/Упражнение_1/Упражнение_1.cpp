
#include <iostream>
using namespace std; 



class Int {

    int pole; 
    
public:
    Int() : pole(0) 
    {}
    Int(int n1)
    {pole = n1;}
    void cout_num() {
        cout << "Число равно " << pole << endl;
    }
    void summury(Int n1, Int n2) {
        pole = n1.pole + n2.pole;
    }
    void display() {
    
        cout << pole << endl;
    }
};


int main()
{
    setlocale(0, "");
    Int n1(2);
    Int n2(3);
    Int n3;
    n1.cout_num();
    n2.cout_num();
    n3.summury(n1, n2);
    cout << "третье число равно "; n3.display(); cout << endl;




}

