#include <iostream>
#define capacity 3
using namespace std;
int stack[capacity];
int top = -1;
void push(int  x)
{

    if(top < capacity-1)
    {
        top++;
        stack[top] = x;
        cout<<"Successfully you have added an item "<<x<<endl;
    }else
    {
        cout<<"Exceptions! Stack is full.";
    }
}
int pop()
{
    if(top>-1)
    {
        top--;
        cout<<"Successfully you deleted an item "<<stack[top]<<endl;
    }
    else{
        cout<<"Exceptions! the stack is empty";
    }
    return -1;
}
int peek()
{
    if(top > -1)
    return stack[top];
    else
        cout<<"Exceptions! no item for peek\n";
}

int main()
{
    peek();
    push(5);
    push(10);
    push(20);
    pop();
    push(30);

    cout<<"Peeked item "<<peek();
    return 0;
}
