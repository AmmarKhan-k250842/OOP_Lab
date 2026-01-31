#include <iostream>
#include <string>
using namespace std;





// TASK 1

struct player
{
    string name;
    int hits; 
    int hRuns;
};

void enterData(struct player s[], int h, int r, string n, int c)
{
    s[c].hits = h;
    s[c].hRuns = r;
    s[c].name = n;
}

void updatePlayer(struct player s[], int h, int r, string n, int num)
{
    s[num - 1].hits = h;
    s[num - 1].hRuns = r;
    s[num - 1].name = n;
}

void displayData(struct player s[])
{
    for(int j = 0; j < 3; j++)
    {
        cout << "\n-----------Player Data "<< j + 1 << " -------------" << endl;
        cout << "Player Name: " << s[j].name << endl;
        cout << "Player Home Runs: " << s[j].hRuns << endl;
        cout << "Player Number of Hits: " << s[j].hits << endl; 
    }
}

int main()
{
    struct player p[3];
    int x, hit, run, count = 0, num1;
    string nam;

    while(1)
    {
        cout << "\nPress 1 to Enter Data, Press 2 to display data, 3 to update Player, 4 to exit: ";
        cin >> x;

        if(x == 1)
        {
            for(int u = 0; u < 3; u++)
            {
                cout << "\nEnter Player Name: ";
                cin >> nam;
                cout << "Enter Player Home Runs: ";
                cin >> run;
                cout << "Enter Player Hits: ";
                cin >> hit;

                enterData(p, hit, run, nam, count);
                
                count++;
            }
        }
        if(x == 2)
        {
            displayData(p);
        }
        if(x == 3)
        {
            cout << "\nEnter Player Number: ";
            cin >> num1;
            cout << "Enter Player Name: ";
            cin >> nam;
            cout << "Enter Player Home Runs: ";
            cin >> run;
            cout << "Enter Player Hits: ";
            cin >> hit;

            updatePlayer(p, hit, run, nam, num1);
        }
        if(x == 4)
        {
            cout << "\nGoodBye!" << endl;
            break;
        }
    }

    return 0;

}





// TASK 2

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

    while(1)
    {
        cout << "Enter month (1-12): ";
        cin >> m;
        cout << "Enter day (1-31): ";
        cin >> d;
        cout << "Enter year: ";
        cin >> y;

        if((m < 1 || m > 12) || (d > 31 || d < 1))
        {
            cout << "Enter valid parameters: ";
        }
        else
        {
            break;
        }
    }

    Date myDate(m, d, y);

    cout << "\nShowing the date in 3 formats:\n" << endl;
    myDate.printFormat1();
    myDate.printFormat2();
    myDate.printFormat3();

    return 0;
}





// TASK 3

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class person {
private:
    string Name;
    int Age;
    bool Male;
    string Occupation;
    bool Cook;

public:
    void setName(string n) { Name = n; }
    void setAge(int a) { Age = a; }
    
    string setOccupation(string o) { 
        Occupation = o; 
        return Occupation; 
    }
    
    void setMale(bool m) { Male = m; }
    void setCook(bool c) { Cook = c; }

    string getName() { return Name; }
    int getAge() { return Age; }
    string getOccupation() { return Occupation; }
    
    bool isMale() { return Male; }
    bool isFemale() { return !Male; } 
    bool canCook() { return Cook; }
};

void processPerson(person &p, int personNum) {
    string tempStr;
    int tempInt;
    char tempChar;

    cout << "----- Input for Person " << personNum << " -----" << endl;
    cout << "Enter Name: ";
    getline(cin >> ws, tempStr);
    p.setName(tempStr);

    cout << "Enter Age: ";
    cin >> tempInt;
    p.setAge(tempInt);

    cout << "Is this person male? (y/n): ";
    cin >> tempChar;
    p.setMale(tempChar == 'y' || tempChar == 'Y');

    cout << "Enter Occupation: ";
    getline(cin >> ws, tempStr);
    p.setOccupation(tempStr);

    cout << "Can this person cook? (y/n): ";
    cin >> tempChar;
    p.setCook(tempChar == 'y' || tempChar == 'Y');

    cout << "\n----- Results for Person " << personNum << " -----" << endl;
    cout << "Name: " << p.getName() << endl;
    cout << "Age: " << p.getAge() << endl;
    cout << "Is Male: " << (p.isMale() ? "True" : "False") << endl;
    cout << "Is Female: " << (p.isFemale() ? "True" : "False") << endl;
    cout << "Occupation: " << p.getOccupation() << endl;
    cout << "Can Cook: " << (p.canCook() ? "Yes" : "No") << endl;
    cout << "--------------------------------\n" << endl;
}

int main() {
    person p1, p2;

    processPerson(p1, 1);
    processPerson(p2, 2);

    return 0;
}