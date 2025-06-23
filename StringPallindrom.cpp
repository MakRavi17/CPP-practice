#include<iostream>
using namespace std;

int main(){
    string str = "madam";
    string Rstr;
    int n = str.length();
    cout<<"Original string : "<<str<<endl;

    for (int i = n-1; i >= 0; i--)
    {
        Rstr = Rstr + str[i];
    }

    cout<<"Reverse string : "<<Rstr<<endl;
    
    if (str == Rstr)
    {
        cout<<"It is pallindrom!";
    }
    else
    {
        cout<<"It is not pallindrom!";
    }
    
    

    return 0;
}