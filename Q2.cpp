#include <iostream>
#include <string>
using namespace std;

class Employee {
private:

    string name;
    double salary;
    string designation;

public:
    
    Employee(string n = "", double s = 0.0, string d = "") {
        name = n;
        salary = s;
        designation = d;
    }

    void setName(string n) {
        name = n;
    }

    void setSalary(double s) {
        if (s >= 0) {
            salary = s;
        } else {
            cout << "Salary must be a positive value." << endl;
        }
    }

    void setDesignation(string d) {
        designation = d;
    }

    string getName() const {
        return name;
    }

    double getSalary() const {
        return salary;
    }

    string getDesignation() const {
        return designation;
    }

    void displayEmployeeDetails() const {
        cout << "Employee Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
        cout << "Designation: " << designation << endl;
    }
};

int main() {

    Employee emp;


    emp.setName("John Doe");
    emp.setSalary(50000);
    emp.setDesignation("Software Engineer");

    cout << "Employee Details using getters:" << endl;
    cout << "Name: " << emp.getName() << endl;
    cout << "Salary: $" << emp.getSalary() << endl;
    cout << "Designation: " << emp.getDesignation() << endl;

    cout << "\nEmployee Details using display method:" << endl;
    emp.displayEmployeeDetails();

    return 0;
}