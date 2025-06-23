#include <iostream>
#include <vector>
using namespace std;

vector<int> GCommonDivisor(int n1, int n2)
{
    vector<int> v1, v2, v;

    for (int i = 1; i <= n1; i++)
    {
        if (n1 % i == 0)
        {
            v1.push_back(i);
        }
    }

    for (int i = 1; i <= n2; i++)
    {
        if (n2 % i == 0)
        {
            v2.push_back(i);
        }
    }

    for (int i = v1.size() - 1; i >= 0; i--)
    {
        for (int j = v2.size() - 1; j >= 0; j--)
        {
            if (v1[i] == v2[j])
            {
                v.push_back(v1[i]);
            }
        }
    }

    return v;
}

int main()
{
    int n1, n2, answer;
    cin >> n1 >> n2;

    vector<int> ans = GCommonDivisor(n1, n2);

    answer = (n1 * n2) / ans[0];

    cout<<"Answer = "<<answer;

    return 0;
}