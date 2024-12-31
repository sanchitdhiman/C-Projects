#include <iostream>

using namespace std;

bool odd_or_even_checker(int num) {
    return num % 2 == 1;
}

int main() {
    cout << "Welcome to the Odd or Even Checker!" << endl;

    cout << "Enter a nuumber: ";
    int num;
    cin >> num;

    bool odd = odd_or_even_checker(num);

    if (odd) {
        cout << num << " is an odd number." << endl;
    } else {
        cout << num << " is an even number." << endl;
    }

    return 0;
}