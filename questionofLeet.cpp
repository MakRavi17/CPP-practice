#include<iostream>
#include<stack>
#include<string>
using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        int maxLen = 0;
        st.push(-1); // Base for the first valid substring

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(') {
                st.push(i);
            } else {
                st.pop();
                if (st.empty()) {
                    st.push(i);
                } else {
                    maxLen = std::max(maxLen, i - st.top());
                }
            }
        }
        return maxLen;
    }
};

int main() {
    Solution solution;
    string input = "()(()";
    cout<< "Longest valid parentheses length: " << solution.longestValidParentheses(input) << std::endl;
    return 0;
}