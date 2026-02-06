#include <iostream>
#include <string>
using namespace std;

class Student 
{
    private:
    string stdID;
    string stdName;
    string dept;

    public:
    Student() 
    {
        this->stdID = "";
        this->stdName = "";
        this->dept = "";
        cout << "[System] Default Constructor called." << endl;
    }

    Student(string id, string name) 
    {
        this->stdID = id;
        this->stdName = name;
        this->dept = "N/A";
        cout << "[System] Overloaded Constructor 1 called." << endl;
    }

    Student(string id, string name, string d) 
    {
        this->stdID = id;
        this->stdName = name;
        this->dept = d;
        cout << "[System] Overloaded Constructor 2 called." << endl;
    }

    Student(string name, string d, int dummy) 
    {
        this->stdID = "Unknown";
        this->stdName = name;
        this->dept = d;
        cout << "[System] Overloaded Constructor 3 called." << endl;
    }

    Student(const Student &obj) 
    {
        this->stdID = obj.stdID;
        this->stdName = obj.stdName;
        this->dept = obj.dept;
        cout << "[System] Copy Constructor called (Object Cloned)." << endl;
    }

    void inputData() 
    {
        cout << "\nEnter ID: ";
        cin >> this->stdID;
        cin.ignore(); 
        cout << "Enter Name: ";
        getline(cin, this->stdName);
        cout << "Enter Dept: ";
        getline(cin, this->dept);
    }

    void displayData() const
    {
        cout << "ID: " << this->stdID 
                  << " | Name: " << this->stdName 
                  << " | Dept: " << this->dept << endl;
    }

    ~Student() 
    {
        cout << "[System] Destructor called for Student: " << this->stdName << endl;
    }
};

int main() 
{
    cout << "--- Creating Local Objects ---" << endl;
    Student obj1;                                    
    Student obj2("12345", "Ali Hassan");            
    Student obj3("23456", "Sheraz Depp", "CS");       
    
    Student obj4 = obj3;

    cout << "\n--- Displaying Local Object Data ---" << endl;
    obj1.displayData();
    obj2.displayData();
    obj3.displayData();
    obj4.displayData();

    cout << "\n--- Creating Dynamic Objects ---" << endl;
    Student* dObj1 = new Student("999", "Dynamic User 1", "Engineering");
    Student* dObj2 = new Student("Fahad Abbas", "Computer Science", 0); 
    Student* dObj3 = new Student();
    dObj3->inputData();

    cout << "\n--- Displaying Dynamic Object Data ---" << endl;
    dObj1->displayData();
    dObj2->displayData();
    dObj3->displayData();

    cout << "\n--- Destroying Dynamic Objects (Explicitly via delete) ---" << endl;
    delete dObj1;
    delete dObj2;
    delete dObj3;

    cout << "\n--- End of Main (Local objects will be destroyed now) ---" << endl;
    return 0;
}