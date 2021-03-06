/*  Program to show integer overflow
    For expected inputs <=16 all is well, but
    What happens otherwise?

    by Jan Pearce, Berea College */

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int myinput;
    cout << "Please a positive integer enter 16 or lower: ";
    cin >> myinput;

    for (int i = 0; i < pow(2, myinput); i = pow(2, i)) {
        cout << "i = " << i << endl;
    }

    return 0;
}