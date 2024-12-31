#include <iostream>

using namespace std;

void add(float num1, float num2) {
    float result = num1 + num2;

    cout << "\nThe sum of " << num1 << " and " << num2 << " is " << result << "." << endl;
}

void subtract(float num1, float num2) {
    float result = num1 - num2;

    cout << "\nThe difference between " << num1 << " and " << num2 << " is " << result << "." << endl;
}

void multiply(float num1, float num2) {
    float result = num1 * num2;

    cout << "\nThe product of " << num1 << " and " << num2 << " is " << result << "." << endl;
}

void divide(float num1, float num2) {

    if (num2 == 0) {
        cout << "\nDivision with zero is not allowed!" << endl;
        return;
    }

    float result = num1 / num2;

    cout << "The sum of " << num1 << " and " << num2 << " is " << result << "." << endl;
}

void calculator() {
    cout << "\nEnter the operation you want to perform (+, -, *, /): ";

    char operation;
    cin >> operation;

    if (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
        cout << "Invalid input." << endl;
        return;
    }

    cout << "Enter the 1st operand: ";
    float num1;
    cin >> num1;

    cout << "Enter the 2nd operand: ";
    float num2;
    cin >> num2;

    switch (operation) {
        case '+':
            add(num1, num2);
            break;
        case '-':
            subtract(num1, num2);
            break;
        case '*':
            multiply(num1, num2);
            break;
        case '/':
            divide(num1, num2);
            break;
    }
}

int main() {
    cout << "Welcome to the calculator!" << endl << endl;

    cout << "Available operations:\n1. Addition (+)\n2. Subtraction (-)\n3. Multiplication (*)\n4. Division (/)\n";

    calculator();

    return 0;
}
