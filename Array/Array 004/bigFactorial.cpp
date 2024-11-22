#include <iostream>
#include <vector>
using namespace std;

// Function to multiply the number in the vector by a given value 'val'
void go(vector<int>& a, int val, int &size) {
    int carry = 0;  // Initialize carry

    // Multiply each digit by the given value and manage carry
    for (int i = 0; i < size; i++) {
        int product = a[i] * val + carry;
        a[i] = product % 10;  // Store the last digit of the product in the array
        carry = product / 10;  // Carry forward the remaining value
    }

    // Handle carry (in case multiplication generates a number with more digits)
    while (carry > 0) {
        a[size] = carry % 10;  // Store the last digit of carry
        carry /= 10;  // Reduce carry
        size++;  // Increase the size of the array
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Vector to store the digits of the result, large enough to hold factorials of large numbers
    vector<int> a(500, 0);
    int size = 1;  // Initially, the size is 1 because we store '1' in a[0]

    a[0] = 1;  // Initialize the result as 1 (0! = 1)

    // Calculate factorial by multiplying each number from 2 to n
    for (int i = 2; i <= n; i++) {
        go(a, i, size);
    }

    // Print the result in reverse (since the most significant digits are at the end of the vector)
    for (int i = size - 1; i >= 0; i--) {
        cout << a[i];
    }
    cout << endl;

    return 0;
}
