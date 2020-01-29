#include <iostream>
using namespace std;

// allows user to enter a value for feet and inches, or exit the program
// returns exit value (true = exit, false = continue to loop)
bool userInput( float& feet, float& inches) {
    string input1 = "";
    string input2 = "";
    cout << "enter feet, or enter \"exit\": ";
    cin >> input1;
    if(input1 == "exit") {
        // returns true to exit
        return true;
    } else {

        feet = stof(input1);
    }
    cout << "enter inches: ";
    cin >> input2;
    inches = stof(input2);

    // returns false to keep looping
    return false;
}

// takes in feet and inches and returns equivalent length in meters
float convertImperialToMeters(float feet, float inches) {
    float totalFeet = feet + (inches / 12.0);
    return totalFeet * 0.3048;
}

// takes in meters and returns the remainder in centimeters
float getCentimetersFromMeters(float meters) {
    return 100 * (meters - (int)meters);
}
// prints rounded-off meters and remaining centimeters
void printMetric(float meters, float centimeters) {
    cout << (int)meters << " meters and " << centimeters << " centimeters" << endl;
}


int main(int argc, char ** argv) {
    bool exit = false;
    float feet = 0.0f;
    float inches = 0.0f;
    float meters = 0.0f;
    float centimeters = 0.0f;

    exit = userInput(feet, inches);

    while(!exit) {
        // sums feet and inches and converts to meters
        meters = convertImperialToMeters(feet, inches);
        // takes remainder meters and converts to centimeters
        centimeters = getCentimetersFromMeters(meters);
        // prints meters and centimeters
        printMetric(meters, centimeters);
        
        exit = userInput(feet, inches);
    }
    cout << "program terminated" << endl;

    return 0;
}
