#include <iostream>
#include <stack>
using namespace std;

void removeAtIndex(stack<int> &st, int idx)
{
    if (idx < 0 || idx > st.size())
    {
        cout << "index out of bound!";
        return;
    }

    stack<int> temp;
    int n = st.size();
    int count = 0;

    while (count < n - idx - 1)
    {
        count++;
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }

    st.pop();

    while (!temp.empty())
    {
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
}

int main()
{

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    removeAtIndex(st, 2);

    while (!st.empty())
    {
        int curr = st.top();
        cout << curr << endl;
        st.pop();
    }

    return 0;
}


//Swapping two number using Two veriable
// #include<iostream>
// using namespace std;

// int main(){

//     int a = 1,b = 2;

//     cout<<"a = "<<a<<",b = "<<b<<endl;

//     // (b,a) = (a,b);
//     b = a + b;
//     a = b - a;
//     b = b - a;

//     cout<<"a = "<<a<<",b = "<<b<<endl;

//     return 0;
// }