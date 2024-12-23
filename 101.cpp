//Write a function template to find the maximum of two values of any type.
#include <iostream>
using namespace std;

// Function template to find maximum of two values
template <typename T>
T findMaximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Examples with different data types
    int int1 = 5, int2 = 10;
    double double1 = 5.5, double2 = 3.3;
    char char1 = 'a', char2 = 'z';
    
    cout << "Maximum of " << int1 << " and " << int2 << " is " << findMaximum(int1, int2) << endl;
    cout << "Maximum of " << double1 << " and " << double2 << " is " << findMaximum(double1, double2) << endl;
    cout << "Maximum of " << char1 << " and " << char2 << " is " << findMaximum(char1, char2) << endl;
    
    return 0;
}
