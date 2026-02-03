#include<iostream>
using namespace std;
class addition
    {   int a,b;
        int sum;//data,pvt
        public:    //functions,public
        void getData();//functions
        void display();//functions

    };
    void addition::getData()//:: scope resolution operator
    {
        cout<<"Enter first number";
        cin>>a;
        cout<<"Enter second number";
        cin>>b;
    };
void addition::display()
{
    sum =a+b;
    cout<<"sum of two numbers is"<<sum;
};
int main(){
    addition a1 ;
    a1.getData();
    a1.display();
    return 0;
}




#include <iostream>
using namespace std;

class AverageMarks {
    int m1, m2, m3;

public:
    void input() {
        cout << "Enter marks of student 1: ";
        cin >> m1;
        cout << "Enter marks of student 2: ";
        cin >> m2;
        cout << "Enter marks of student 3: ";
        cin >> m3;
    }

    float calculateAverage() {
        return (m1 + m2 + m3) / 3.0;
    }
};

int main() {
    AverageMarks obj;
    obj.input();
    cout << "Average Marks = " << obj.calculateAverage() << endl;
    return 0;
}




int main() {
    AverageMarks obj;
    obj.input();
cout << "Average Marks = " << obj.calculateAverage() << endl;
    return 0;
}


///ques2 
#include <iostream>
using namespace std;

class Circle {
    float radius;

public:
    void input() {
        cout << "Enter radius of the circle: ";
        cin >> radius;
    }

    float area() {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Circle c;      // Object creation
    c.input();     // Calling member function
    cout << "Area of Circle = " << c.area();
    return 0;
}





/////ques3 
#include <iostream>
using namespace std;

class Temperature {
public:
    float convertToCelsius(float f) {
        return (f - 32) * 5 / 9;
    }

    float convertToFahrenheit(float c) {
        return (c * 9 / 5) + 32;
    }
};

int main() {
    Temperature t;
    float value;
    int choice;

    cout << "1. Fahrenheit to Celsius\n2. Celsius to Fahrenheit\n";
    cin >> choice;

    cout << "Enter temperature: ";
    cin >> value;

    if (choice == 1)
        cout << "Celsius = " << t.convertToCelsius(value);
    else
        cout << "Fahrenheit = " << t.convertToFahrenheit(value);

    return 0;
}


#include <iostream>
using namespace std;

class Shop {
public:
    int itemNo, quantity;
    float price;

    void input() {
        cout << "Enter Item No, Quantity, Unit Price: ";
        cin >> itemNo >> quantity >> price;
    }

    void calculateBill() {
        float total = quantity * price;
        float discount = total * 0.20;
        float netAmount = total - discount;

        cout << "Total Amount: " << total << endl;
        cout << "Discount: " << discount << endl;
        cout << "Net Payable: " << netAmount << endl;
    }
};

int main() {
    Shop s;
    s.input();
    s.calculateBill();
    return 0;
}



#include <iostream>
using namespace std;

class Swap {
public:
    void usingTemp(int a, int b) {
        int temp = a;
        a = b;
        b = temp;
        cout << "After swap (temp): " << a << " " << b << endl;
    }

    void withoutTemp(int a, int b) {
        a = a + b;
        b = a - b;
        a = a - b;
        cout << "After swap (no temp): " << a << " " << b << endl;
    }
};

int main() {
    Swap s;
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    s.usingTemp(x, y);
    s.withoutTemp(x, y);

    return 0;
}



#include <iostream>
using namespace std;

class Employee {
public:
    float basic, bonus, net;

    void calculate() {
        bonus = basic * 0.12;
        net = basic + bonus;
    }

    void display(int id) {
        cout << "Employee " << id << " Net Salary: " << net << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee e;
    for (int i = 1; i <= n; i++) {
        cout << "Enter basic salary of employee " << i << ": ";
        cin >> e.basic;
        e.calculate();
        e.display(i);
    }
    return 0;
}

#include <iostream>
using namespace std;

class Game {
public:
    int a, b, c;

    void input() {
        cout << "Enter three scores: ";
        cin >> a >> b >> c;
    }

    void findWinner() {
        if (a > b && a > c)
            cout << "Player 1 is Winner";
        else if (b > a && b > c)
            cout << "Player 2 is Winner";
        else if (c > a && c > b)
            cout << "Player 3 is Winner";
        else
            cout << "It's a Tie";
    }
};

int main() {
    Game g;
    g.input();
    g.findWinner();
    return 0;
}
