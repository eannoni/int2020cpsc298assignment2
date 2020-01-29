#include <iostream>
using namespace std;

// returns calculated sales tax for a specific cost
float addTax(float taxRate, float cost) {
    return cost * (taxRate * 0.01);
}


int main(int argc, char **argv) {
    float taxRate = 5.8;
    float cost = 49.95;
    float finalCost = 0.0;

    cout << "cost: $" << cost << endl;
    cout << "tax rate: " << taxRate << "%" << endl;

    // adds calculated sales tax to regular cost
    finalCost = cost + addTax(taxRate, cost);
    cout << "final cost: $" << finalCost << endl;

    return 0;
}
