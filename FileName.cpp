#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // seed random number generator
    char choice;
    int roll; // Declare roll here to make it accessible outside the loop

    do {
        roll = (rand() % 6) + 1; // random number between 1 and 6
        cout << "You rolled a " << roll << "! \n" << endl;
        if (roll == 4) {
            cout << "Bad luck dummy :( \n" << endl;
        }
        cout << "Roll again? (y/n): \n";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Thanks for playing!" << endl;
    return 0;
}