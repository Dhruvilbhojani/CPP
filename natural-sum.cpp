#include<iostream>
using namespace std;

int main ()
{
    int n = 0;
    cin >> n;

    if(n > 0)
    {
        cout << ((n * (n + 1)) / 2) << endl;
    }
    else
    {
        cout << "enter a natural number!" << endl;
    }

    return 0;
}