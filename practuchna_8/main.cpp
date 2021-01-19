#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int x;
    int count = 20;
    int even[20];
    int odd[20];
    vector<int> v_even;
    vector<int> v_odd;
    vector<int> all;

    // init arr
    for (int i = 0; i < count; i++)
    {
        even[i] = i*2;
    }
    for (int i = 0; i < count; i++)
    {
        odd[i] = i*2+1;
    }

    //  even and odd random
    cout<<"Elements before sorting vector v_even"<<endl;
    for (int i = 0; i < 10; i++)
    {
        x = rand() % count;
        cout << even[x] << " ";
        v_even.push_back(even[x]);
    }
    cout << endl;

    cout<<"Elements before sorting vector v_odd"<<endl;
    for (int i = 0; i < 10; i++)
    {
        x = rand() % count;
        cout << odd[x] << " ";
        v_odd.push_back(odd[x]);
    }
    cout << endl<<endl;

    //sort
    cout<<"Elements after sorting vector v_even"<<endl;
    sort(v_even.begin(), v_even.end());
    for (const auto &i: v_even)
    {
        cout << i << " ";
    }
    cout << endl;

    cout<<"Elements after sorting vector v_even"<<endl;
    sort(v_odd.begin(), v_odd.end());
    for (const auto &i: v_odd)
    {
        cout << i << " ";
    }
    cout << endl;

    //merge
    cout<<"Elements after sorting vector v_even and vector v_odd"<<endl;
    merge(v_even.begin(), v_even.end(), v_odd.begin(), v_odd.end(), back_inserter(all) );
    for (const auto &i: all)
    {
        cout << i << " ";
    }
    return 0;
}
