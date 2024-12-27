#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op;

    cout << "Welcome to the Digital Calculator!" << endl;
    cout << "Enter an operation in the format: number1 operator number2" << endl;
    cout << "Supported operators: +, -, *, /" << endl;

    // Input numbers and operator
    cout << "Enter calculation: ";
    cin >> num1 >> op >> num2;

    // Perform the calculation based on the operator
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1;
            }
            break;
        default:
            cout << "Error: Unsupported operator." << endl;
            return 1;
    }

    // Output the result
    cout << "Result: " << result << endl;
    return 0;
}
