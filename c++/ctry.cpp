#include <iostream>
using namespace std;

int main() {
    int num, largest, smallest;

    cout << "Enter 5 numbers:\n";

    // Input first number
    cin >> num;
    largest = smallest = num;

    // Input remaining 4 numbers
    for(int i = 2; i <= 5; i++) {
        cin >> num;

        if(num > largest) {
            largest = num;
        }

        if(num < smallest) {
            smallest = num;
        }
    }

    cout << "\nLargest Number = " << largest << endl;
    cout << "Smallest Number = " << smallest << endl;

    return 0;
}