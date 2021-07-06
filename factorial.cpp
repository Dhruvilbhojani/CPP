#include<iostream>
using namespace std;

int main ()
{
    int n = 0;
    cin >> n;

    unsigned long long int fact = 1;
    int i = 0;

    for (i = 1; i <= n; ++i)
    {
        fact = fact * i;
    }

    cout << fact << endl;

    return 0;
}