#include <iostream>
#include <string>
using namespace std;




// TASK 1

class Employee 
{
    private:
    string name;
    int idNumber;
    string department;
    string position;

    public:
    Employee() 
    {
        name = "";
        idNumber = 0;
        department = "";
        position = "";
    }

    Employee(string n, int id, string dept, string pos) 
    {
        name = n;
        idNumber = id;
        department = dept;
        position = pos;
    }

    ~Employee() 
    {
        cout << "Destructor" << endl;
    }

    void setName(string n) { name = n; }
    void setIdNumber(int id) { idNumber = id; }
    void setDepartment(string dept) { department = dept; }
    void setPosition(string pos) { position = pos; }

    string getName() const { return name; }
    int getIdNumber() const { return idNumber; }
    string getDepartment() const { return department; }
    string getPosition() const { return position; }
};

int main() 
{
    Employee emp1, emp2, emp3;

    emp1.setName("Waleed Abbid");
    emp1.setIdNumber(47899);
    emp1.setDepartment("Accounting");
    emp1.setPosition("Vice President");

    emp2.setName("Haidar Ali");
    emp2.setIdNumber(39119);
    emp2.setDepartment("IT");
    emp2.setPosition("Programmer");

    emp3.setName("Nouman khaliq");
    emp3.setIdNumber(81774);
    emp3.setDepartment("Manufacturing");
    emp3.setPosition("Engineer");

    cout << "--- Initial Data (From Table) ---" << endl;
    cout << emp1.getName() << "\t" << emp1.getIdNumber() << "\t" << emp1.getDepartment() << "\t" << emp1.getPosition() << endl;
    cout << emp2.getName() << "\t" << emp2.getIdNumber() << "\t" << emp2.getDepartment() << "\t" << emp2.getPosition() << endl;
    cout << emp3.getName() << "\t" << emp3.getIdNumber() << "\t" << emp3.getDepartment() << "\t" << emp3.getPosition() << endl;

    Employee* employees[3] = { &emp1, &emp2, &emp3 };
    for (int i = 0; i < 3; i++) 
    {
        string n, dept, pos;
        int id;
        cout << "\nEnter details for Employee " << i + 1 << ":" << endl;
        cout << "Name: ";
        getline(cin >> ws, n);
        cout << "ID: ";
        cin >> id;
        cout << "Department: ";
        getline(cin >> ws, dept);
        cout << "Position: ";
        getline(cin >> ws, pos);

        employees[i].setName(n);
        employees[i].setIdNumber(id);
        employees[i].setDepartment(dept);
        employees[i].setPosition(pos);
    }

    cout << "\n--- Updated Data (User Input) ---" << endl;
    for (int i = 0; i < 3; i++) 
    {
        cout << employees[i].getName() << "\t" << employees[i].getIdNumber() << "\t" << employees[i].getDepartment() << "\t" << employees[i].getPosition() << endl;
    }

    return 0;
}





// TASK 2

