#include <iostream>
using namespace std;

int main() {

    // This loop controls the number of lines
    for (int i = 1; i <= 5; i++) {

        // This loop prints numbers from 5 down to i
        for (int j = 5; j >= i; j--) {
            cout << j << " ";
        }

        // Move to the next line after printing one row
        cout << endl;
    }

    return 0;
}
