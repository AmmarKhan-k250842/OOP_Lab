#include <iostream>
#include <string>
using namespace std;

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
        cout << "Player Home Runs: " << s[j].hits << endl;
        cout << "Player Number of Hits: " << s[j].hRuns << endl; 
    }
}

int main()
{
    struct player p[3];
    int x, hit, run, count, num1;
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