#include<iostream>
using namespace std;

void printName(string f_name, string l_name = "")
{
    cout << f_name << " ";
    if(l_name != "")
        cout << l_name << endl;
}

int main()
{
    printName("Shreyash", "Detroja");
    printName("Dhruvil");
    return 0;
}