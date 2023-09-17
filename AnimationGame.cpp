#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
    srand(time(0));
    const int size = 30;
    char letter;

    cout << "Enter a letter to begin \n ";
     cin >> letter;

    int p = size / 2;

    while (true) {
        cout << "|START|";
        for (int i = 0; i < size; i++) {
            if (i == p)
                cout << letter;
            else cout << " ";
        }
        cout << "|FINISH|" << endl;
        int move = rand() % 3 - 1;
        p = p + move;
        if (p < 1) { cout << "You could not finish the race!" << endl; break; }
        if (p > size - 1) { cout << "Yay! You finished the race" << endl; break; }
        for (int sleep = 0; sleep < 1000000; ++sleep);
    }
    return 0;
}