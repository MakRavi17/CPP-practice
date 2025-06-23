#include<iostream>
using namespace std;

int main(){
    
    int arr[] = {2,3,7,9};
    int arr1[4], ans;

    for (int i = 0; i < 4; i++)
    {
        ans = arr[i] * arr[i];
        arr1[i] = ans;
    }

    for (int i = 0; i < 4; i++)
    {
        cout<<arr1[i]<<" ";
    }
    
    return 0;
}