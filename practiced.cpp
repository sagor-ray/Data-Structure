#include <iostream>
#define size 4
using namespace std;

int arr[size],front = 0,rear = -1,totalitem = 0;
void enqueue(int item)
{
    if(totalitem < size)
    {
        rear = (rear+1)%size;
        arr[rear] = item;
        //cout<<"Successfully add item: "<<item<<endl;
        totalitem++;
    }
    else
    {
        cout<<item<<" Item not added. Queue is full\n";
    }

}
int dequeue()
{
    if(totalitem > 0)
    {
        cout<<arr[front]<<" Item successfully deleted\n";
        arr[front] = 0;
        front = (front + 1)%size;
        totalitem--;
        return front;
    }
    else
        cout<<"Empty Queue"<<endl;
    return -1;
}
void print()
{
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    dequeue();
    enqueue(50);
    dequeue();
    enqueue(60);

    print();
}
