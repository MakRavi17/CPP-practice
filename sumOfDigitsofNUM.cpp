#include<iostream>
using namespace std;

int main(){

    int num, modu, sum = 0;
    cout<<"Enter a Number : ";
    cin>>num;

    while (num != 0)
    {
        modu = num % 10;
        sum = sum + modu;
        num = num / 10;
    }
    cout<<"Sum = "<<sum;

    return 0;
}