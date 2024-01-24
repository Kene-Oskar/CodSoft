// OKAFOR KENECHUKWU
// C++ Programming
// CodSoft Task 1


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int Number = (rand() % 100) + 1;

    int guess;
    int attempts = 0;

     cout << "*****Welcome to the Random Number Guessing Game!*****" << endl << endl;

do
{
     cout << "Enter your guess (a number between 1 and 100):" << endl << endl;
     cin >> guess;

    attempts++;


    if (guess > Number) {
     cout << "Too high, guess a lower number!" << endl << endl;

    }

    else if (guess < Number){
     cout << "Too low, guess a higher number!" << endl << endl;

    }

    else {
     cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." << endl;
    }


} while (guess != Number);


    return 0;
}
