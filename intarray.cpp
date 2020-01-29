#include <iostream>
#include <array>

using namespace std;

int main(int argc, char ** argv) {
    int numArray[10];

    for(int i = 0; i < 10; ++i) {
        cout << "Enter non-negative integer #" << i + 1 << ": ";
        cin >> numArray[i];
    }

    for(int i = 0; i < 10; ++i) {
        cout << numArray[i] << endl;
    }

    return 0;
}
