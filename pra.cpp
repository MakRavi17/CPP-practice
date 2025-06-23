#include <iostream>
using namespace std;

int prime()
{

    int num = 100;
    for (int i = 2; i <= num; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j != 0)
            {
                return i;
            }
        }
    }
}

int main()
{
    int n = 5;
    int primeNum = prime();
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << primeNum;
        }

        cout << endl;
    }

    return 0;
}