#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter Three Num : "<<endl;

    cin>>a>>b>>c;
    // cout<<endl;

    if (a>b && a>c)
    {
        cout<<a<<" is Greatest Num!";
    }
    else if (b>a && b>c)
    {
        cout<<b<<" is Greatest Num!";
    }
    else
    {
        cout<<c<<" is Greatest Num!";
    }
    
    

    return 0;
}