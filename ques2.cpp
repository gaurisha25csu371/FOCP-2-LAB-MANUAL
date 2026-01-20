#include <iostream>
using namespace std;

int main() {
    float radius, area;
    const float PI = 3.14159;

    cout << "Enter the radius of the circular fountain: ";
    cin >> radius;

    area = PI * radius * radius;

    cout << "Area of the circular fountain is: " << area << endl;

    return 0;
}