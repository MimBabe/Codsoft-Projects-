#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
     cout << "Welcome to Number game!"<< endl;
    int num, guess, tries = 0;
    srand(time(0)); 
    num = rand() % 100 + 1; 100;
    do
    {
        cout << "Enter a guess between 1 and 100 : ";
        cin >> guess;
        tries++;
        if (guess > num)
            cout << "Too high! \n";
        else if (guess < num)
            cout << "Too low! \n";
        else
            cout << "\nCorrect! You got it in " << tries << " guesses!\n";
    } 
    while (guess != num);
    return 0;
}