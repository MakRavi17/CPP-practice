#include<iostream>
using namespace std;

int main(){
    string str = "Hellow World!!!!";
    int n = str.length();
    cout<<str<<endl;

    for (int i = 0; i < n/2; i++)
    {
        swap(str[i], str[n-i-1]);
    }
    
    cout<<str;

    return 0;
}