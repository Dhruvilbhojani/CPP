#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main ()
{
    vector<int> v{10, 20, 100, 40, 50, 500, 8};
    int res = 0;
    res = v[0];
    int i = 0;
    for (i = 0; i < v.size(); ++i)
    {
        // if(v[i] > max)
        //     max = v[i];
        res = max(res, v[i]);
    }
    cout << res << endl;

    int result = *max_element(v.begin(), v.end());
    cout << result << endl;

    cout << "all the elements of vector are : ";
    // for(int i = 0; i < v.size(); ++i)
    //     cout << v[i] << " ";
    for(auto i = v.begin(); i != v.end(); ++i)
        cout << *i << " ";
    // for(auto x : v)
    //     cout << x << " ";

    return 0;
}