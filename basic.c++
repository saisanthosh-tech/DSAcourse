#include <iostream>
#include <string.h>
using namespace std;

void first(){
    string s;
    int a;
    char b;

    cout << "Enter String : ";
    cin >> s;
    cout << endl;

    cout << "Enter a number : ";
    cin >> a;
    cout << endl;

    cout << "Enter a char : ";
    cin >> b;

    cout << s << endl;
    cout << a << endl;
    cout << b << endl;
}

void second(){
    int a,b,c;
    cout << "Enter three values :"<<endl;
    cin >> a>>b>>c;
    if(a+b+c == 180){
        cout << "It can form a triangle";
    }
    else{
        cout << "No";
    }
}

void three(){
    int mark;
    cout << "Enter the student's mark: "<< endl;
    cin >> mark;

    if (mark >= 90) {
        cout << "Grade A" << endl;
    } else if (mark >= 80) {
        cout << "Grade B" << endl;
    } else if (mark >= 60) {
        cout << "Grade C" << endl;
    } else if (mark >= 35) {
        cout << "Grade D" << endl;
    } else {
        cout << "Fail" << endl;
    }
}

int main(){
     first();
    second();
    three();
}