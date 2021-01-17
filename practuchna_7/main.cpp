#include <iostream>

using namespace std;

template <typename T>
void aver_val(int size)
{
    T arr[size];
    T sum = 0;
    cout << "Enter the elements of the array" << endl;

    for(int i =0; i < size; i++)
    {
        cout << "Enter " << i + 1 << " element of the array" << endl;
        cin >> arr[i];
    }

    for(int i =0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    for(int i =0; i < size; i++)
    {
        if(i == size -1)
        {
            cout << arr[i];
        }
        else
        {
            cout << arr[i] << " + ";
        }
    }
    cout << " = " << sum << endl;
    cout << "Sum = " << sum << endl;

//    for(int i =0; i < size; i++)
//    {
//        cout << i+1 << " element of the array is: " << arr[i] << endl;
//    }
};

template <typename T>
void amax(int size , T arr[])
{
    T max_val;
    for (int i = 0; i < size; i++)
    {
        if(max_val < arr[i])
        {
            max_val = arr[i];
        }
    }
    cout << "Max value is " << max_val << endl;
};

int main()
{
    int arr[3] = {11,31,12};
    amax<int>(3, arr);

//    aver_val<int>(3);
//    aver_val<long>(3);
//    aver_val<double>(3);
//    aver_val<char>(3);
}
