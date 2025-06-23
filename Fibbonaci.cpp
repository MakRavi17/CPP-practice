#include<iostream>
using namespace std;

int main(){

    int n1 = 0, n2 = 1, n3, step;
    cout<<"Enter Num of steps : ";
    cin>>step;
    cout<<endl;

    cout<<n1<<" "<<n2;

    for (int i = 3; i <= step; i++)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout<<" "<<n3;
    }
    

    return 0;
}