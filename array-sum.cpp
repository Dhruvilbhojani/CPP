#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    int arr[n];
    vector<int> v;
    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        v.push_back(arr[i]);
    }

    int s1 = 0;
    s1 = accumulate(arr, arr + n, s1);
    cout << s1 << endl;

    int s2 = 0;
    s2 = accumulate(v.begin(), v.end(), s2);
    cout << s2 << endl;
    



    return 0;
}