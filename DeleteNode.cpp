#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *link;
};

struct Node *createNode(int ar[], int Size)
{
    struct Node *head = NULL, *temp = NULL, *current = NULL;
    int i;
    for(i=0; i<Size; i++)
    {
        temp =(struct Node *) malloc(sizeof(struct Node));
        temp ->data = ar[i];
        temp ->link = NULL;
        if(head == NULL)
        {
            head  = temp;
            current = temp;
        }
        else
        {
            current ->link = temp;
            current = current ->link;
        }
    }
    return head;
}

int main()
{
    struct Node *head;
    int arr[5] = {1,2,3,4,5};
    head = createNode(arr,5);
    while(head != NULL)
    {
        cout<<head ->data<<" ";
        head = head ->link;
    }
    cout<<"Null";
    return 0;
}
