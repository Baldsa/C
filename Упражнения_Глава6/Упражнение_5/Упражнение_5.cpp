

#include <iostream>
using namespace std; 


class date
{
private:
    char ch = '/';
    int month, day, year;
public:
    date() : month(0), day(0), year(0) {}
    void getdate(int us_day, int mon, int us_year) {
        month = mon; 
        day = us_day;
        year = us_year; 
    }
    void showdate() {
        cout << "Date " << day << ch << month << ch << year << endl;
         
    }
};






int main()
{
    date date1;
    int us_day;
    int us_month;
    int us_year;
    char ch = '/';
    cout << "Enter date ";
    cin >> us_day >> ch >> us_month >> ch >> us_year;
    date1.getdate(us_day, us_month, us_year);
    date1.showdate();
}

