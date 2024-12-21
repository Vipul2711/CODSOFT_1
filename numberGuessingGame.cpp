#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Seed the random number generator
    srand(time(0));

    // Random number between 1 and 100
    int num = rand() % 100 + 1;

    cout << "Guess the number (between 1 and 100):" << endl;

    int your_number;

    while (true)
    {

        cout << "Enter your guessing number : ";
        cin >> your_number;

        if (your_number > num)
        {
            cout << "Too high! Try again..." << endl;
        }
        else if (your_number < num)
        {
            cout << "Too low! Try again..." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed it right.!!" << endl;
            break;
        }
    }

    return 0;
}
