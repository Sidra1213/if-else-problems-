#include<iostream>
using namespace std;
int main(){
	  int units;
    double totalBill;

    cout << "Enter the number of units consumed: ";
    cin >> units;

    // Calculate the total bill using if and else if
    if (units <= 400) {
        totalBill = units * 10;
    } else if (units > 400) {
        totalBill = units * 15;
    }

    // Add Rs. 150 if the total bill exceeds Rs. 4000
    if (totalBill > 4000) {
        totalBill += 150;
    }

    // Output the result immediately
    cout << "The total electricity bill is: Rs. " << totalBill << endl;

    return 0;
}
