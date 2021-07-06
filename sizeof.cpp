#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
    int a;
    float b;
    char c;
    double d;

    cout << "size of a " << sizeof(a) << endl;
    cout << "size of b " << sizeof(b) << endl;
    cout << "size of c " << sizeof(c) << endl;
    cout << "size of d " << sizeof(d) << endl;

    float x;
    cin >> x;
    cout << x << endl;

    double y;
    cin >> y;
    cout << setprecision(12) << y << endl;

    return 0;
}