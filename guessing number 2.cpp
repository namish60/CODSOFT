#include<bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    
    srand(static_cast<unsigned int>(time(NULL)));

    
    int x = std::rand() % 10 + 1;

    int guess;
    int no_of_attempts = 0;

    cout << "**********          Welcome to the Guess the Number game!          **********"<<endl;
    cout<<endl;
    cout<<endl;
    cout << "I'm thinking of a number between 1 and 10. Try to guess it."<<endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        no_of_attempts++;

        if (guess < x) {
            cout << "Too low! Try again.\n";
        } else if (guess > x) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the correct number in " << no_of_attempts << " attempts.\n";
        }
    } while (guess != x);

    return 0;
}

