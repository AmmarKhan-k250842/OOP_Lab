#include <iostream>
#include <string>

using namespace std;

class Date 
{
    private:
        int month;
        int day;
        int year;

        string monthNames[12] = {
            "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"
        };

    public:
        Date(int m, int d, int y) 
        {
            month = m;
            day = d;
            year = y;
        }

        void printFormat1() 
        {
            cout << month << "/" << day << "/" << (year % 100) << endl;
        }
        void printFormat2() 
        {
            cout << monthNames[month - 1] << " " << day << ", " << year << endl;
        }
        void printFormat3() 
        {
            cout << day << " " << monthNames[month - 1] << " " << year << endl;
        }
};

int main() 
{
    int m, d, y;

    cout << "Enter month (1-12): ";
    cin >> m;
    cout << "Enter day (1-31): ";
    cin >> d;
    cout << "Enter year: ";
    cin >> y;

    if(m < 1 || m > 12)
    {
        cout << "Enter valid month: "
    }

    Date myDate(m, d, y);

    cout << "\nShowing the date in 3 formats:\n" << endl;
    myDate.printFormat1();
    myDate.printFormat2();
    myDate.printFormat3();

    return 0;
}