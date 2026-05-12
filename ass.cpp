#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int chosenNumber = 7;
    int userGuess = 0;

    vector<int> guesses;

    while (userGuess != chosenNumber) {

        cout << "Enter your guess: ";
        cin >> userGuess;

        // save every guess in the list
        guesses.push_back(userGuess);

        if (userGuess > chosenNumber) {
            cout << "Too high" << endl;
        }
        else if (userGuess < chosenNumber) {
            cout << "Too low" << endl;
        }
        else {
            cout << "Correct" << endl;
        }
    }

    cout << "\nAll guesses entered:" << endl;

    for (int i = 0; i < guesses.size(); i++) {
        cout << guesses[i] << endl;
    }

    return 0;
}