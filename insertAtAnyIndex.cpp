#include<iostream>
#include<stack>
using namespace std;

void atIndex(stack<int> &st, int x ,int idx){

    if (idx < 0 || idx > st.size())
    {
        cout<<"index out of bound!";
        return;
    }
    

    stack<int> temp;
    int count = 0;
    int n = st.size();

    while (count < n - idx)
    {
        count++;
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    
    st.push(x);

    while (!temp.empty())
    {
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }

}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    atIndex(st,10,1);

    while (!st.empty())
    {
        int curr = st.top();
        cout<<curr<<endl;
        st.pop();
    }

    return 0;
};