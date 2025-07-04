#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nge(vector<int> &arr){
    int n = arr.size();
    vector<int> output(n,-1);
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[i] > arr[st.top()])
        {
            output[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    return output;
}

int main(){
    int n;
    cin>>n;
    vector<int> v;

    while (n--)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    vector<int> res = nge(v);
    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<" ";
    }

    return 0;
}