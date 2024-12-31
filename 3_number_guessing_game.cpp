#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void guessing();

void guessed(int random, int count) {
    cout << "\nCongratulations! You guessed the number " << random << " in " << count << " tries." << endl;

    cout << "\nDo you want to play again? (Y/N): ";
    char choice;
    cin >> choice;

    if (choice == 'Y' || choice == 'y') {
        cout << endl;
        guessing();
    } else {
        cout << "\nThank you for playing the game!" << endl;
    }
}

void game(int start, int end, int random, int count) {
    int guess;
    cin >> guess;

    if (guess == random) {
        guessed(random, count);
        return;
    } else if (guess > random) {
        cout << "\nHIGH.\n" << endl;
    } else {
        cout << "\nLOW.\n" << endl;
    }

    cout << "Try again: ";
    game(start, end, random, count + 1);
}

void guessing() {
    int start, end;

    cout << "\nEnter the starting number of the range: ";
    cin >> start;

    cout << "Enter the ending number of the range: ";
    cin >> end;

    srand(time(0));

    int random;
    random = (rand() % (end - start + 1)) + start;

    cout << "\nOkay, Let's start the game!" << endl;

    cout << "\nGuess the number: ";
    game(start, end, random, 0);
}



int main() {
    cout << "Welcome to the number guessing game!" << endl;

    cout << "\nRules:\n1. You have to tell the range in which you'll be guessing.\n2. The computer will generate a random number in that range.\n3. You have to guess the number.\n4. You'll be given hints if your guess is too high or too low.\n5. You have to guess the number in minimum number of tries." << endl;
    
    guessing();

    return 0;
}
