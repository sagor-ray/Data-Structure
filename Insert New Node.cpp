#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node* link;
};
struct node *createLinkedList(int ar[], int n)
{
    struct node *head = NULL, *current = NULL, *temp;
    for(int i = 0; i<n; i++)
    {
        temp = (struct node*) malloc(sizeof(struct node*));
        temp->data = ar[i];
        temp->link = NULL;
        if(head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current->link = temp;
            current = current->link;
        }
    }
    return head;
}

void createNode(struct node* head, int m)
{
    struct node *temp, *newHead=head;
    int n;
    cout<<"Enter the position: ";
    cin>>n;
    for(int i = 1; i<=n-1; i++)
    {
        newHead = newHead->link;
    }
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = m;
    temp->link = newHead->link;
    newHead->link = temp;
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->link;
    }
    cout<<"NULL\n";
}

int main()
{
    int ar[5]={1,2,3,4,5};
    int n = sizeof(ar)/sizeof(ar[0]);
    struct node* head = createLinkedList(ar,n);
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->link;
    }
    cout<<"NULL\n";
    createNode(head,9);

}
