#include <iostream>
#include <iomanip>

using namespace std;


void solve(int howManyNumbers, int numberSelected) // N,k
{
    if (howManyNumbers < 1 || numberSelected < 1){
        cout << "This is not a possible lottery.";
        return;
    } else {
        double NNN = 1;
        while (numberSelected > 0){
            NNN = NNN * (howManyNumbers - numberSelected + 1 ) / numberSelected;
            numberSelected --;
        }
        cout << "Your chances of winning are 1 in " << fixed << setprecision(0) << NNN << endl;
    }
    return;
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
