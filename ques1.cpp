#include <iostream> ////ques1
using namespace std;

int main()
{
    float sub1, sub2, sub3, sub4, sub5;
    float total, average;

    cout << "Enter marks of 5 subjects:\n";
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    average = total / 5;

    cout << "Total Marks = " << total << endl;
    cout << "Average Marks = " << average << endl;

    return 0;
}
