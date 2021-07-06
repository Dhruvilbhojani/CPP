#include<iostream>
using namespace std;

int main ()
{
    int x = 0;
    int y = 0;

    cin >> x >> y;

    cout << "x + y = " << (x + y) << endl;
    cout << "x - y = " << (x - y) << endl;
    cout << "x * y = " << (x * y) << endl;
    cout << "x / y = " << (x / y) << endl;
    cout << "x % y =" << (x % y) << endl;

    int z = 0;
    z = x++;
    cout << x << " " << z << endl;
    z = ++x;
    cout << x << " " << z << endl;

    return 0;

}