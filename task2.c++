#include <iostream>
using namespace std;

void one() {
    int x, y;
    
    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter value of y: ";
    cin >> y;
    
    for (int i = 0; i < y; i++) {
        cout << x << endl;
    }
    
}


void two() {

    int x;

    cout << "Enter the value of x: ";
    cin >> x;

    for (int i = 1; i * x <= 1000; i++) {
        cout << i * x << endl;
    }
}


void three(){
string firstName, lastName;
int n;

cout << "Enter first name: ";
cin >> firstName;

cout << "Enter last name: ";
cin >> lastName;

cout << "Enter the number of times to print full name: ";
cin >> n;

string fullName = firstName + " "+ lastName;

for (int i = 0; i < n; i++) {
    cout << fullName << endl;
}
}

int main() {
    one();
    two();
    three();
}
