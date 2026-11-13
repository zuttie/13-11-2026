#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    char choicse[] = {'r', 'p', 's'};
    char computer = choicse[rand() % 3];

    char player;
    cout << "Choose (r/p/s): ";
    cin >> player;
    cout << "Computer: " << endl;
    ห
    cout << "You: ";
if (player == 'r') cout << "Rock";
else if (player == 'p') cout << "Paper";
else cout << "Scissors";
cout << endl;

cout << "Computer: ";
if (computer == 'r') cout << "Rock";
else if (computer == 'p') cout << "Paper";
else cout << "Scissors";
cout << endl;

    if (player != 'r' && player != 'p' && player != 's') {
        cout << "Invalid choicse" << endl;
        return 0;
    }
    if (player == computer) {
        cout << "Darw" << endl;
    }
    else if ((player == 'r' && computer == 's') ||
             (player == 'p' && computer == 'r') ||
             (player == 's' && computer == 'p')) {
                cout << "You win!!" << endl;
             }
             else {
                cout << "You lose" << endl;
             }
    return 0;
}