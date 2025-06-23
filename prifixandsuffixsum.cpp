#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin>>ele;
        arr[i] = ele; 
    }

    for (int i = 1; i < n; i++)
    {
       arr[i] = arr[i] + arr[i-1];
       for (int j = n; j > 0; j--)
       {
            arr[j] = arr[j] + arr[j-1];
            if (arr[i] == arr[j])
            {
                cout<<i;
                break;
            }
            
       }
       
    }
    
    return 0;
}