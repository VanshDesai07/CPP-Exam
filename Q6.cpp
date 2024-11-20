#include <iostream>
#include <stdexcept>  // For standard exceptions
using namespace std;

class Calculator {
public:

    double divide(double numerator, double denominator) {
        if (denominator == 0) {

            throw runtime_error("Error: Division by zero is not allowed.");
        }
        return numerator / denominator;
    }
};

int main() {
    Calculator calc;

    double num, denom;

    cout << "Enter numerator: ";
    cin >> num;

    cout << "Enter denominator: ";
    cin >> denom;

    try {
        
        double result = calc.divide(num, denom);
        cout << "Result: " << result << endl;
    } catch (const runtime_error& e) {

        cout << e.what() << endl;
    }

    return 0;
}