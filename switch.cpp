#include<iostream>
using namespace std;

int main ()
{
    char c;
    cout << "Find The Last Indian State In Each Direction." << endl;
    cout << "enter a direction as (E, W, N, S) : ";
    cin >> c;

    switch(c)
    {
        case 'E' : cout << "Arunachal Pradesh" << endl; break;
        case 'W' : cout << "Gujarat" << endl; break;
        case 'N' : cout << "Jammu - Kashmir" << endl; break;
        case 'S' : cout << "Tamil Nadu" << endl; break;
        default : cout << "Enter valid direction!";
    }

    return 0;
}