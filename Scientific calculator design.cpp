#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class ScientificCalculator {
public:
    double add(double a, double b) const { return a + b; }
    double subtract(double a, double b) const { return a - b; }
    double multiply(double a, double b) const { return a * b; }
    double divide(double a, double b) const {
        if (b == 0) {
            cout << "Error: Division by zero\n";
            return NAN;
        }
        return a / b;
    }
    double power(double base, double exponent) const { return pow(base, exponent); }
    double squareRoot(double a) const {
        if (a < 0) {
            cout << "Error: Cannot find square root of a negative number\n";
            return NAN;
        }
        return sqrt(a);
    }
    double factorial(int n) const {
        if (n < 0) {
            cout << "Error: Factorial of a negative number is undefined\n";
            return NAN;
        }
        if (n == 0)
            return 1;
        return n * factorial(n - 1);
    }
};

int main() {
    ScientificCalculator calc;
    char operation;
    double num1, num2;

    cout << "Welcome to the Scientific Calculator!\n";
    cout << "Enter operation (+, -, *, /, ^, sqrt, !):- ";
    cin >> operation;

    switch(operation) {
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
            cout << "Enter two operands:- ";
            cin >> num1 >> num2;
            switch(operation) {
                case '+':
                    cout << "Result:- " << calc.add(num1, num2) << endl;
                    break;
                case '-':
                    cout << "Result:- " << calc.subtract(num1, num2) << endl;
                    break;
                case '*':
                    cout << "Result:- " << calc.multiply(num1, num2) << endl;
                    break;
                case '/':
                    cout << "Result:- " << calc.divide(num1, num2) << endl;
                    break;
                case '^':
                    cout << "Result:- " << calc.power(num1, num2) << endl;
                    break;
            }
            break;
        case 's':
            cout << "Enter the number:- ";
            cin >> num1;
            cout << "Result: " << calc.squareRoot(num1) << endl;
            break;
        case '!':
            int n;
            cout << "Enter a non-negative integer:- ";
            cin >> n;
            cout << "Result: " << calc.factorial(n) << endl;
            break;
        default:
            cout << "Invalid operation entered\n";
    }

    return 0;
}