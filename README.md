# C++ Armstrong Number Generator

This C++ program generates Armstrong numbers within a specified range (0 to 1000000). An Armstrong number (also known as a narcissistic, pluperfect, or pluperfect digital invariant number) is a number that is the sum of its own digits each raised to the power of the number of digits.

## Armstrong Number Calculation

The program iterates through numbers from 0 to 1000000 and checks if each number is an Armstrong number by calculating the sum of its digits each raised to the power of the number of digits.

### Steps:

1. Iterate through numbers from 0 to 1000000.
2. For each number, calculate the number of digits.
3. Sum the digits each raised to the power of the number of digits.
4. If the sum is equal to the original number, print it as an Armstrong number.

## Usage

The `main` function contains the code for generating and printing Armstrong numbers within the specified range.

### Example Usage:

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (int i = 0; i <= 1000000; i++) {
        int rem, sum = 0, digits = 0;
        int n = i;

        // Calculate the number of digits
        while (n != 0) {
            n = n / 10;
            digits++;
        }

        n = i;
        // Sum the digits each raised to the power of the number of digits
        while (n != 0) {
            rem = n % 10;
            sum = sum + pow(rem, digits);
            n = n / 10;
        }

        // If the sum is equal to the original number, print it as an Armstrong number
        if (sum == i) {
            cout << i << endl;
        }
    }

    return 0;
}
