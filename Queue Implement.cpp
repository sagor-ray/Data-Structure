#include <iostream>
using namespace std;
#define capacity 5

int totalItem = 0, front = 0, rear = -1;
int queue[capacity];
bool isFull()
{
    if(totalItem == capacity)
        return true;
    else
        return false;
}
bool isEmpty()
{
    if(totalItem == 0)
        return true;
    else
        return false;
}
void enqueue(int item)
{
    if(isFull() == true)
    {
        cout<<"\nThe Queue is full."<<endl;
        return;
    }
    rear = (rear + 1) % capacity;
    queue[rear]  = item;
    totalItem++;

}

int dequeue()
{
    if(isEmpty() == true)
    {
        cout<<"The queue list is Empty.";
    }
    queue[front] = 0;
    front = (front + 1) % capacity;
    totalItem--;

    return front;
}
void print()
{
    cout<<"\nThe queue list is : ";
    for(int i = 0; i<capacity; i++)
    {
        cout<<queue[i]<<" ";
    }
}
int main()
{
    enqueue(10);
    print();
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    print();
    dequeue();
    print();
    enqueue(60);
    print();
}
