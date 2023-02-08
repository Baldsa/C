#include <iostream>
using namespace std; 
#include <iomanip>

enum etype { worker, secretary, manager, accountant, director, researcher};
class date
{
private:
    char ch = '/';
    int month, day, year;
public:
    date() : month(0), day(0), year(0) {}
    void getdate() {
        cin >> day >> ch >> month >> ch >> year;
    }
    void showdate() {
        cout << setw(8)  << "Date " << setw(8) << day << ch << month << ch << year << endl;

    }
};
class employee {
private:
    int number;
    float summary;
    date begdate; 
    etype position;
public:
    void get_info() {
        char ch;
        cout << "Enter number of employee, salary, first char of vacancy ";
        cin >> number >> summary >> ch;
        cout << "Enter date";
        begdate.getdate();
        switch (ch)
        {
        case 'w': position = worker; break;
        case 's': position = secretary; break;
        case 'm': position = manager; break;
        case 'a': position = accountant; break;
        case 'd': position = director; break;
        case 'r': position = researcher; break;
        default: position = worker; // при указании неверной буквы
        }

    }
    void display() {
        cout << setw(8) << number << setw(8) << summary;
        switch (position)
        {
        case 0: cout << setw(15) << "worker "; break;
        case 1: cout << setw(15) << "secretary "; break;
        case 2: cout << setw(15) << "manager "; break;
        case 3: cout << setw(15) << "accountant "; break;
        case 4: cout << setw(15) << "director "; break;
        case 5: cout << setw(15) << "researcher "; break;
        }
        begdate.showdate(); 
    }
};




int main()
{
    employee em1, em2, em3;
    em1.get_info();
    em2.get_info();
    em3.get_info();
    cout << "\nInformation about the company's employees:\n"
        << setw(5) << "Number" << setw(9) << "Salary"
        << setw(18) << "Post" << setw(12) << "Date of admission" << endl;
    em1.display();
    em2.display();
    em3.display();

}

