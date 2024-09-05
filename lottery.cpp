#include <iostream>
#include <iomanip>

using namespace std;

void solve(int howManyNumbers, int numberSelected)
{
    //**  Your code here.
}

int main(int argc, char **argv)
{
    int howManyNumbers;
    int numberSelected;

    cout << "How many numbers are printed on the lottery ticket? " << flush;
    cin >> howManyNumbers;
    cout << "How many numbers are selected in the lottery drawing? " << flush;
    cin >> numberSelected;

    cout << endl;

    solve(howManyNumbers, numberSelected);

    return 0;
}
