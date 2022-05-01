#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};

void elementOfLinkedlist(int ar[],int n)
{
        cout<<"Enter the "<<n<<" elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
}

struct node *createLinkedList(int ar[],int n)
{
    struct node *head=NULL,*current = NULL, *temp = NULL;
    for(int i=0; i<n; i++)
    {
        temp =(struct node*) malloc(sizeof(struct node));
        temp->data = ar[i];
        temp->link = NULL;
        if(head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current ->link = temp;
            current = current->link;
        }
    }
    return head;
}

void ReverseLinkedlist(struct node *head)
{
    struct node *prev = NULL, *current = head, *next = NULL;
    while (current != NULL)
    {
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }
    while (prev != NULL)
    {
        cout<<prev->data<<" ";
        prev = prev ->link;
    }
    cout<<"NULL\n";
}

int main()
{
    int Size;
    cout<<"Enter the value of Array elements: ";
    cin>>Size;
    int arr[Size];
    elementOfLinkedlist(arr,Size);

    struct node *head;
    head =  createLinkedList(arr,Size);
    struct node *newHead = head;
    cout<<"The Linklist is: ";
    while (head != NULL)
    {
        cout<<head->data<<" ";
        head = head ->link;
    }
    cout<<"NULL\n";
    cout<<"The Reverse linked list: ";
    ReverseLinkedlist(newHead);
}
