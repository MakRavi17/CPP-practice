#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter Array Size : ";
    cin >> n;

    int arr[n];

    cout << "Enter Element of Array : ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    cout << "Second Largest Element : " << arr[1];

    return 0;
}