#include <iostream>
#include <stack>
using namespace std;

int minNum(stack<int> &st)
{
    if (st.empty())
    {
        cout << "Stack is empty!";
        return -1;
    }

    int min = st.top();
    st.pop();

    while (!st.empty())
    {
        if (min > st.top())
        {
            min = st.top();
        }
        st.pop();
    }
    return min;
}

int main()
{
    stack<int> st;
    st.push(0);
    st.push(3);
    st.push(-11);
    st.push(7);
    st.push(10);

    int minValue = minNum(st);
    cout << "Minimum value is : " << minValue;
    return 0;
}