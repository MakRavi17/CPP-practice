#include<iostream>
#include<stack>
using namespace std;

void removeAtBottum(stack<int> &st){
    stack<int> temp;
    int n = st.size();

    for (int i = 1; i <n ; i++)
    {
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

int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    removeAtBottum(st);

    while (!st.empty())
    {
        int curr = st.top();
        cout<<curr<<endl;
        st.pop();
    } 

    return 0;
}