#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (int i = 0; i <= 1000000; i++) {
        int rem, sum = 0, digits = 0;
        int n = i;

        while (n != 0) {
            n = n / 10;
            digits++;
        }

        n = i;
        while (n != 0) {
            rem = n % 10;
            sum = sum + pow(rem, digits);
            n = n / 10;
        }

        if (sum == i) {
            cout << i << endl;
        }
    }

    return 0;
}
