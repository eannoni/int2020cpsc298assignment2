#include <iostream>
using namespace std;

// sets both variables to zero
void zeroBoth(int& var1, int& var2) {
    var1 = 0;
    var2 = 0;
}


int main(int argc, char **argv) {
    int num1 = 15;
    int num2 = -24;

    cout << num1 << ", " << num2 << endl;

    cout << "Converting to 0..." << endl;
    zeroBoth(num1, num2);

    cout << num1 << ", " << num2 << endl;

    return 0;
}
