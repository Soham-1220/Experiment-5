#include<iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;

    if(num1 > num2) {
        if(num1 > num3) {
            cout << "The largest number is: " << num1 << endl;
        } else {
            cout << "The largest number is: " << num3 << endl;
        }
    } else {
        if(num2 > num3) {
            cout << "The largest number is: " << num2 << endl;
        } else {
            cout << "The largest number is: " << num3 << endl;
        }
    }
    return 0;
}
/*OUTPUT
Enter first number: 11
Enter second number: 22
Enter third number: 1
The largest number is: 22 */
