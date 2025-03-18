#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    srand(time(0));
    int RandNum = rand() % 100 + 1;
    // cout << RandNum << endl;
    while (true)
    {
        cout << "Guess a number: ";
        cin >> num;
        if (num > RandNum)
            cout << "Too high! Try again! \n";
        if (num < RandNum)
            cout << "Too low! Try again! \n";
        if (num == RandNum)
        {
            cout << "Congratulation! You Guessed Correctly";
            break;
        }
    }
    return 0;
}