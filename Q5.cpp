#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    double salary;

public:

    Employee(string n = "", double s = 0.0) : name(n), salary(s) {}

    string getName() const {
        return name;
    }

    double getSalary() const {
        return salary;
    }

    void setName(string n) {
        name = n;
    }

    void setSalary(double s) {
        salary = s;
    }

    double operator+(const Employee& other) {
        return this->salary + other.salary;
    }

    void display() const {
        cout << "Employee Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {

    Employee emp1("John Doe", 50000);
    Employee emp2("Jane Smith", 60000);

    cout << "Employee 1 Details:" << endl;
    emp1.display();
    cout << endl;

    cout << "Employee 2 Details:" << endl;
    emp2.display();
    cout << endl;

    double totalSalary = emp1 + emp2;

    cout << "Total Salary of both employees: $" << totalSalary << endl;

    return 0;
}