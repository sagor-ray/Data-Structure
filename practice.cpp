#include <iostream>
#include <stdlib.h>

using namespace std;

struct node{
    int data;
    struct node* link;
};
//int arr[5] = {1,2,3,4,5};
struct node* linkedlist(int arr[])
{
    struct node *head = NULL, *current = NULL, *temp = NULL;
    for(int i=0; i<5; i++)
    {
        temp =(struct node*) malloc(sizeof(struct node));
        temp ->data = arr[i];
        temp->link = NULL;
        if(head == NULL)
       {
            head = temp;
            current = temp;
       }
       else{
        current->link = temp;
        current = current->link;
       }
    }
    return head;

}

void ReverseLinkedlist(struct node* head)
{
    struct node *prev = NULL, *current = head, *next = NULL;
    while(current != NULL)
    {
        next=current->link;
        current->link = prev;
        prev = current;
        current=next;
    }
    while(prev != NULL)
    {
        cout<<prev->data<<" ";
        prev = prev->link;
    }
    cout<<"NULL\n";

}

int main()
{

    struct node *head;
    int arr[5] = {1,2,3,4,5};
    head = linkedlist(arr);

    cout<<"The following linkedlist is: ";
    while(head != NULL)
    {
        cout<<head ->data<<" ";
        head = head ->link;
    }
    cout<<"Null\n";
    cout<<"The Reverse linkedlist is : ";
    head = linkedlist(arr);
    ReverseLinkedlist(head);

    return 0;
}
