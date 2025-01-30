#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number, guess, attempts = 0;
    srand(time(0)); // Random number seed
    number = rand() % 100 + 1; // Generates a random number between 1 and 100

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "Guess the number between 1 and 100: ";

    // Game loop
    do {
        cin >> guess;
        attempts++;

        if (guess > number) {
            cout << "Too high! Try again: ";
        } else if (guess < number) {
            cout << "Too low! Try again: ";
        } else {
            cout << "Congratulations! You've guessed the number " << number << " in " << attempts << " attempts.\n";
        }

    } while (guess != number);

    return 0;
}