#include <iostream>
#include <cctype>
using namespace std;

int main()
{

    string str = "With these changes, the code will correctly convert the string to lowercase and then print only the vowels";

    for (char c : str)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'O' || c == 'I' || c == 'E' || c == 'U')
        {
            cout << c << " ";
        }
    }

    return 0;
}