#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    std::cout << "HELLO WORLD";

    return 0;
}
#include <stdio.h>

int main() {
  int a=1, b=10, sum;
  sum= a+b;
    printf("sum of both the numbers is %d",sum);

    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    int num1, num2, sum, sub, multi;
    float divi;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    sum = num1 + num2;
    sub = num1 - num2;
    multi = num1 * num2;
    divi = (float)num1 / num2;

    cout << "The sum of two numbers is " << sum << endl;
    cout << "The difference of two numbers is " << sub << endl;
    cout << "The multiplication of two numbers is " << multi << endl;
    cout << "The division of two numbers is " << divi << endl;

    return 0;
}
