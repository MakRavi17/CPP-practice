#include <iostream>
using namespace std;

class Stack
{
    int capacity;
    int *arr;
    int top;

public:
    Stack(int c)
    {
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    }

    void push(int data)
    {
        if (this->top == this->capacity - 1)
        {
            cout << "Overflow\n";
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }

    int pop()
    {
        if (this->top == -1)
        {
            cout << "Underflow\n";
            return INT16_MIN;
        }
        this->top--;
    }

    int getTop()
    {
        if (this->top == -1)
        {
            cout << "Underflow\n";
            return INT16_MIN;
        }
        return this->arr[this->top];
    }

    bool isEmpty()
    {
        return this->top == -1;
    }

    bool isFull()
    {
        return this->top == this->capacity - 1;
    }

    int size()
    {
        return this->top + 1;
    }
};

int main()
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout << st.isEmpty() << endl;
    cout << st.isFull() << endl;
    cout << st.getTop() << endl;

    st.pop();
    st.pop();

    cout << st.getTop() << endl;
    cout << st.size();

    return 0;
}