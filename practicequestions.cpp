

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin,name);

    cout << "The name is:" <<name;

    return 0;
}
//  a function is also known as method in oops
//  when we are taking string input immediately after any other data type input we need to use the cin.ignore 

#include <iostream>
#include <string>
using namespace std;
int main(){
    int number;
    string name;
    cout<<"Enter number";
    cin>>number;
    cin.ignore();
    cout<<"Enter name";
    getline(cin,name);
    cout<<number;
    cout<<name;
    return 0;
}
