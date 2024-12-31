#include <iostream>

using namespace std;

bool check_prime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    cout << "Welcome to the Prime Number Finder!" << endl;

    cout << "Enter a number:";
    int num;
    cin >> num;

    bool isPrime = check_prime(num);

    if (isPrime) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}