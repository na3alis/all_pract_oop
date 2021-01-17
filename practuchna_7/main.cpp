#include <iostream>

using namespace std;

template <typename T>
void aver_val(int size, T arr[])
{
    // 3 * блок виведення всіх елементів масива
    T sum = 0;
    for(int i =0; i < size; i++)
    {
        cout << i+1 << " element of the array is: " << arr[i] << endl;
    }
    cout << endl;
    // * 3

    // 4 * блок виведення суми свіх елементів масива
    for(int i =0; i < size; i++)
    {
        sum = sum + arr[i];

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
    cout << endl;
    sum  = 0;
    // * 4
};

template <typename T>
void amax(int size , T arr[])
{
    // 5 * блок знаходження максимального значення масива
    T max_val;
    for (int i = 0; i < size; i++)
    {
        if(max_val < arr[i])
        {
            max_val = arr[i];
        }
    }
    cout << "Max value is " << max_val << endl;
    //  * 5
};

template <typename T>
class Information
{
private:
    int size;
public:
    Information()
    {

    }
    void data(int size,T arr[])
    {
        aver_val<T>(size, arr);
        amax<T>(size, arr);
    }
};
int main()
{
    // 1 * блок введення розміру масива
    int size;
    cout << "Enter size of the array" << endl;
    cin >> size;
    cout << endl;
    //  * 1

    // 2 * блок заповнення масива
    int arr[size];
    for(int i =0; i < size; i++)
    {
        cout << "Enter "<< i + 1 << " element of the array" << endl;
        cin >> arr[i];
    }
    cout << endl;
    // * 2

    Information <int>info;
    info.data(size, arr);
}
