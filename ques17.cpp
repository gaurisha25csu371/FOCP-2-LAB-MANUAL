#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    // ---------- Perfect Number ----------
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == n)
        cout << "Perfect Number" << endl;
    else
        cout << "Not a Perfect Number" << endl;

    // ---------- Armstrong Number ----------
    int original = n;
    int digit, armSum = 0;

    while (n > 0) {
        digit = n % 10;
        armSum = armSum + (digit * digit * digit);
        n = n / 10;
    }

    if (armSum == original)
        cout << "Armstrong Number" << endl;
    else
        cout << "Not an Armstrong Number" << endl;

    return 0;
}